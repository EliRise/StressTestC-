#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QComboBox>
#include <thread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_box_series_activated(ui->box_series->currentIndex());

    ui->GPIO_table_Widget->setColumnCount(2);

    ui->GPIO_table_Widget->setHorizontalHeaderLabels(QStringList() << "Mode" << "Pull");


}





MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_radioButton_toggled(bool checked)
{

}


void MainWindow::on_box_series_activated(int index)
{
    if (index == 0)
    {
        ui->box_number->clear();
        ui->box_number->addItems(QStringList() << "SOOT1" << "SOOT2" << "SOOT3" );
    }
    else if (index == 1)
    {
        ui->box_number->clear();
        ui->box_number->addItems(QStringList() << "GT1" << "GT2" << "GT3" );
    }
    else if (index == 2)
    {
        ui->box_number->clear();
        ui->box_number->addItems(QStringList() << "RTF1" << "RTF2" << "RTF3" );
    }
}





void MainWindow::on_open_file_clicked()
{
    globpath = QFileDialog::getOpenFileName(nullptr,"","C:\\StressTestC++","*.json");
    file.setFileName(globpath);
}


void MainWindow::on_date_upload_clicked()
{
    if (file.open(QIODevice::ReadOnly|QFile::Text))
    {
        doc = QJsonDocument::fromJson(QByteArray(file.readAll()),&docError);
        file.close();

        if (docError.errorString().toInt()==QJsonParseError::NoError)
        {
            QStandardItemModel* model = new QStandardItemModel(nullptr);
            model->setHorizontalHeaderLabels(QStringList()<<"serial"<<"number"<<"frequency_core");

            docAr = QJsonValue(doc.object().value("devices")).toArray();
            for ( int i = 0; i<docAr.count();i++ )
            {
                QStandardItem* item_col_1 = new  QStandardItem(docAr.at(i).toObject().value("serial").toString());
                QStandardItem* item_col_2 = new  QStandardItem(docAr.at(i).toObject().value("number").toString());
                QStandardItem* item_col_3 = new  QStandardItem(QString::number(docAr.at(i).toObject().value("frequency_core").toInt()));

                model->appendRow(QList<QStandardItem*>()<<item_col_1<<item_col_2<<item_col_3);
            }

            ui->tableView->setModel(model);
            ui->tableView->resizeColumnsToContents();
        }
    }
    else
    {
        QMessageBox::information(nullptr, "info","Файл не открыт для чтония");

    }
}







void MainWindow::on_add_device_clicked()
{
    if (file.open(QIODevice::WriteOnly))
    {
        QVariantMap map;
        map.insert("serial", ui->box_series->itemText(ui->box_series->currentIndex()));
        map.insert("number", ui->box_number->itemText(ui->box_number->currentIndex()));
        map.insert("frequency_core", ui->box_frequency_core->text().toInt());


        QJsonObject json = QJsonObject::fromVariantMap(map);

        QJsonArray docToWrite = doc.object().value("devices").toArray();
        docToWrite.append(json);
        doc.setArray(docToWrite);

        file.write("{\"devices\":" + doc.toJson() + "}");
        file.close();

        on_date_upload_clicked();
    }
    else
    {
        QMessageBox::information(nullptr, "info","Файл не открыт для чтония");

    }

}



void MainWindow::on_Added_clicked()
{
    int rowCount = ui->GPIO_table_Widget->rowCount();
    ui->GPIO_table_Widget->setRowCount(rowCount + 1);


    QTableWidgetItem *items [] = {
        new QTableWidgetItem,
        new QTableWidgetItem
    };

    const size_t count = sizeof(items) / sizeof(QTableWidgetItem *);
    for(size_t column = 0; column < count; column++)
        ui->GPIO_table_Widget->setItem(rowCount, column, items[column]);

    QComboBox *mode_combobox = new QComboBox;
    mode_combobox->addItems(QStringList() << "input" << "output" );
    ui->GPIO_table_Widget->setCellWidget(rowCount, 0, mode_combobox);

    QComboBox *pull_combobox = new QComboBox;

    while (true) {
        if (mode_combobox->currentIndex() == 0)
        {
            //pull_combobox->clear();
            pull_combobox->addItems(QStringList() << "floating" << "pull-up" << "pull-down" << "analog" );
        }
        else if (mode_combobox->currentIndex() == 1)
        {
            //pull_combobox->clear();
            pull_combobox->addItems(QStringList() << "push-pull" << "open-drain" << "alternate function push-pull" << "alternate function open-drain" );
        }
    }

    ui->GPIO_table_Widget->setCellWidget(rowCount, 1, pull_combobox);
}




