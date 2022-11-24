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

    on_Added_clicked();




    /*ui->setupUi(this);
    m_process = new QProcess(this);
    connect(m_process, SIGNAL(readyReadStandardOutput()), this, SLOT(setStdout()) );
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(command()) );
*/





}


/*void MainWindow::setStdout()
{
    if(QSysInfo::productType()=="windows")
    {
        QTextCodec *codec = QTextCodec::codecForName("IBM 866");
        ui->textEdit->append( codec->toUnicode(m_process->readAllStandardOutput() ) );
    }
    else
        ui->textEdit->append( m_process->readAllStandardOutput() );
}
void MainWindow::command()
{
    QString strCommand;
    if(QSysInfo::productType()=="windows")
        strCommand = "cmd /C ";
    strCommand += ui->lineEdit->text();
    m_process->start(strCommand);
}
*/

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

        QStandardItemModel* model1 = new QStandardItemModel(nullptr);
        QStandardItem *root = model1->invisibleRootItem();


        if (docError.errorString().toUInt() == QJsonParseError::NoError)
        {
            docAr = QJsonValue(doc.object().value("devices")).toArray();
            for (int i = 0; i<docAr.count();i++)
            {
                QString *full_name = new QString(docAr.at(i).toObject().value("serial").toString() + " : " + docAr.at(i).toObject().value("number").toString());
                //serias_name = new QStandardItem(docAr.at(i).toObject().value("serial").toString());
                QStandardItem *full_name_item = new QStandardItem(*full_name);
                root->appendRow(full_name_item);
                //number_name = new QStandardItem(docAr.at(i).toObject().value("number").toString());
               // root->appendRow(number_name);
                frequency_core = new QStandardItem(QString::number(docAr.at(i).toObject().value("frequency_core").toInt()));
                full_name_item->appendRow(frequency_core);


                QStandardItem *interfaces = new QStandardItem("interfaces");
                full_name_item->appendRow(interfaces);
                QJsonArray interfacesAr = QJsonValue(QJsonObject(docAr.at(i).toObject()).value("interfaces")).toArray();
                for (int j = 0; j<interfacesAr.count(); j++)
                {
                interfaces->appendRow(new QStandardItem(interfacesAr[j].toString()));
                }

                QStandardItem *GPIO_1 = new QStandardItem("GPIO_1");
                full_name_item->appendRow(GPIO_1);
                QJsonArray GPIO_1Ar = QJsonValue(QJsonObject(docAr.at(i).toObject()).value("GPIO_1")).toArray();
                for (int j = 0; j<GPIO_1Ar.count(); j++)
                {
                GPIO_1->appendRow(new QStandardItem(GPIO_1Ar[j].toString()));
                }

            }
        }

        ui->treeView->setModel(model1);
    }


   /* if (file.open(QIODevice::ReadOnly|QFile::Text))
    {
        doc = QJsonDocument::fromJson(QByteArray(file.readAll()),&docError);
       file.close();

        if (docError.errorString().toInt()==QJsonParseError::NoError)
        {
            QStandardItemModel* model = new QStandardItemModel(nullptr);
            model->setHorizontalHeaderLabels(QStringList()<<"serial" <<"number" <<"frequency_core" <<"interfaces");

            docAr = QJsonValue(doc.object().value("devices")).toArray();
            for ( int i = 0; i<docAr.count();i++ )
            {
                QStandardItem *item_col_1 = new  QStandardItem(docAr.at(i).toObject().value("serial").toString());
                QStandardItem *item_col_2 = new  QStandardItem(docAr.at(i).toObject().value("number").toString());
                QStandardItem *item_col_3 = new  QStandardItem(QString::number(docAr.at(i).toObject().value("frequency_core").toInt()));


                QJsonArray interfacesAr = QJsonValue(QJsonObject(docAr.at(i).toObject()).value("interfaces")).toArray();
                QString sost = "";
                for (int j = 0; j<interfacesAr.count(); j++)
                {
                    if (sost == "")
                    {
                        sost = interfacesAr[j].toString();
                    }
                    else
                    {
                        sost = sost + ";" + interfacesAr[j].toString();
                    }
                }

                QStandardItem *item_col_4 = new QStandardItem(sost);

                model->appendRow(QList<QStandardItem*>()<<item_col_1<<item_col_2<<item_col_3<<item_col_4);
            }

            ui->tableView->setModel(model);
            ui->tableView->resizeColumnsToContents();
        }
    }
    else
    {
        QMessageBox::information(nullptr, "info","Файл не открыт для чтения");

    }*/
}







void MainWindow::on_add_device_clicked()
{
    if (file.open(QIODevice::WriteOnly))
    {
        QVariantMap map;
        map.insert("serial", ui->box_series->itemText(ui->box_series->currentIndex()));
        map.insert("number", ui->box_number->itemText(ui->box_number->currentIndex()));
      //map.insert("number", mode_combobox->itemText(mode_combobox->currentIndex()));
        map.insert("frequency_core", ui->box_frequency_core->text().toInt());
        map.insert("interfaces", QJsonArray::fromStringList(QStringList((" USB :" + (ui->Box_USB->currentText()) + \
                                                                         "; UART :" + (ui->Box_UART->currentText()) + \
                                                                         "; SPI :" + (ui->Box_SPI->currentText()) + \
                                                                         "; 12C :" + (ui->Box_12C->currentText()) + \
                                                                         "; Ethernet :" + (ui->Box_Ethernet->currentText()) + \
                                                                         "; 1-Wire :" + (ui->Box_1Wire->currentText()) + \
                                                                         "; Wide-Bus :" + (ui->Box_WideBus->currentText())).split(";"))));
       //  std::cout << this->ui->GPIO_table_Widget->item(1,1) << std::endl;
       // TableRow *GPIO = new TableRow(this->ui->GPIO_table_Widget);
       // map.insert("GPIO_1", QJsonArray::)
       // QList<QTableWidgetItem*> itemList;

                uint32_t rows = this->ui->GPIO_table_Widget->rowCount();
                uint32_t columns = this->ui->GPIO_table_Widget->columnCount();
                QStringList docArGPIO;

                for (int i = 0 ; i < rows ; ++i) {
                   //for (int j = 0 ; j < columns ; ++j)
                   //{
                    QComboBox* combo1=(QComboBox*)this->ui->GPIO_table_Widget->cellWidget(i,0);
                    QComboBox* combo2=(QComboBox*)this->ui->GPIO_table_Widget->cellWidget(i,1);
                    QString fd = (combo1->itemText(combo1->currentIndex())) + ":" + (combo2->itemText(combo2->currentIndex()));
                    docArGPIO.append(fd);
                    //std::cout << fd.toStdString();
                   //}
                   }
                     //foreach (QTableWidgetItem * item, itemList) {
                     // std::cout << item << std::endl;
                     //   }


        map.insert("GPIO_1", QJsonArray::fromStringList(QStringList(docArGPIO)));


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
        QMessageBox::information(nullptr, "info","Файл не открыт для чтения");

    }

}


void MainWindow::on_Added_clicked()
{
    this->tableRows.push_back(new TableRow(this->ui->GPIO_table_Widget));

    //this->ui->GPIO_table_Widget->setColumnCount(int dida);


    //    int rowCount = ui->GPIO_table_Widget->rowCount();
    //    ui->GPIO_table_Widget->setRowCount(rowCount + 1);


    //    QTableWidgetItem *items [] = {
    //        new QTableWidgetItem,
    //        new QTableWidgetItem
    //    };

    //    const size_t count = sizeof(items) / sizeof(QTableWidgetItem *);
    //    for(size_t column = 0; column < count; column++)
    //        ui->GPIO_table_Widget->setItem(rowCount, column, items[column]);

    //    QComboBox *mode_combobox = new QComboBox;
    //    mode_combobox->addItems(QStringList() << "input" << "output" );
    //    ui->GPIO_table_Widget->setCellWidget(rowCount, 0, mode_combobox);

    //    QComboBox *pull_combobox = new QComboBox;

    //    QTableWidget::cellWidget( int row, int column )

    //            if (mode_combobox->currentIndex() == 0)
    //    {
    //        pull_combobox->clear();
    //        pull_combobox->addItems(QStringList() << "floating" << "pull-up" << "pull-down" << "analog" );
    //    }
    //    else if (mode_combobox->currentIndex() == 1)
    //    {
    //        pull_combobox->clear();
    //        pull_combobox->addItems(QStringList() << "push-pull" << "open-drain" << "alternate function push-pull" << "alternate function open-drain" );
    //    }

    //    while (true) {
    //        mode_combobox->currentIndex();
    //    }

    //    ui->GPIO_table_Widget->setCellWidget(rowCount, 1, pull_combobox);
}





void MainWindow::on_Delete_clicked()
{
    ui->GPIO_table_Widget->removeRow(ui->GPIO_table_Widget->currentRow());
}






void MainWindow::on_Box_USB_activated(int index)
{

}



