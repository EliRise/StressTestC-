#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_box_series_activated(ui->box_series->currentIndex());
    on_comboBox_A_activated(ui->comboBox_A->currentIndex());
    on_comboBox_C_activated(ui->comboBox_C->currentIndex());
    on_comboBox_E_activated(ui->comboBox_E->currentIndex());
    on_comboBox_G_activated(ui->comboBox_G->currentIndex());
    on_comboBox_I_activated(ui->comboBox_I->currentIndex());
    on_comboBox_K_activated(ui->comboBox_K->currentIndex());
    on_comboBox_M_activated(ui->comboBox_M->currentIndex());
    on_comboBox_O_activated(ui->comboBox_O->currentIndex());
    on_comboBox_Q_activated(ui->comboBox_Q->currentIndex());
    on_comboBox_S_activated(ui->comboBox_S->currentIndex());
    on_comboBox_U_activated(ui->comboBox_U->currentIndex());
    on_comboBox_W_activated(ui->comboBox_W->currentIndex());
    on_comboBox_Y_activated(ui->comboBox_Y->currentIndex());
    on_comboBox_1_activated(ui->comboBox_1->currentIndex());
    on_comboBox_3_activated(ui->comboBox_3->currentIndex());
    on_comboBox_5_activated(ui->comboBox_5->currentIndex());
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
        ui->box_number->addItem("SOOT1");
        ui->box_number->addItem("SOOT2");
        ui->box_number->addItem("SOOT3");
    }
    else if (index == 1)
    {
        ui->box_number->clear();
        ui->box_number->addItem("GT1");
        ui->box_number->addItem("GT2");
        ui->box_number->addItem("GT3");
    }
    else if (index == 2)
    {
        ui->box_number->clear();
        ui->box_number->addItem("RTF1");
        ui->box_number->addItem("RTF2");
        ui->box_number->addItem("RTF3");
    }
}


void MainWindow::on_comboBox_A_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_B->clear();
        ui->comboBox_B->addItem("floating");
        ui->comboBox_B->addItem("pull-up");
        ui->comboBox_B->addItem("pull-down");
        ui->comboBox_B->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_B->clear();
        ui->comboBox_B->addItem("push-pull");
        ui->comboBox_B->addItem("open-drain");
        ui->comboBox_B->addItem("alternate function push-pull");
        ui->comboBox_B->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_C_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_D->clear();
        ui->comboBox_D->addItem("floating");
        ui->comboBox_D->addItem("pull-up");
        ui->comboBox_D->addItem("pull-down");
        ui->comboBox_D->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_D->clear();
        ui->comboBox_D->addItem("push-pull");
        ui->comboBox_D->addItem("open-drain");
        ui->comboBox_D->addItem("alternate function push-pull");
        ui->comboBox_D->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_E_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_F->clear();
        ui->comboBox_F->addItem("floating");
        ui->comboBox_F->addItem("pull-up");
        ui->comboBox_F->addItem("pull-down");
        ui->comboBox_F->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_F->clear();
        ui->comboBox_F->addItem("push-pull");
        ui->comboBox_F->addItem("open-drain");
        ui->comboBox_F->addItem("alternate function push-pull");
        ui->comboBox_F->addItem("alternate function open-drain");
    }
}



void MainWindow::on_comboBox_G_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_H->clear();
        ui->comboBox_H->addItem("floating");
        ui->comboBox_H->addItem("pull-up");
        ui->comboBox_H->addItem("pull-down");
        ui->comboBox_H->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_H->clear();
        ui->comboBox_H->addItem("push-pull");
        ui->comboBox_H->addItem("open-drain");
        ui->comboBox_H->addItem("alternate function push-pull");
        ui->comboBox_H->addItem("alternate function open-drain");
    }
}



void MainWindow::on_comboBox_I_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_J->clear();
        ui->comboBox_J->addItem("floating");
        ui->comboBox_J->addItem("pull-up");
        ui->comboBox_J->addItem("pull-down");
        ui->comboBox_J->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_J->clear();
        ui->comboBox_J->addItem("push-pull");
        ui->comboBox_J->addItem("open-drain");
        ui->comboBox_J->addItem("alternate function push-pull");
        ui->comboBox_J->addItem("alternate function open-drain");
    }
}




void MainWindow::on_comboBox_K_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_L->clear();
        ui->comboBox_L->addItem("floating");
        ui->comboBox_L->addItem("pull-up");
        ui->comboBox_L->addItem("pull-down");
        ui->comboBox_L->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_L->clear();
        ui->comboBox_L->addItem("push-pull");
        ui->comboBox_L->addItem("open-drain");
        ui->comboBox_L->addItem("alternate function push-pull");
        ui->comboBox_L->addItem("alternate function open-drain");
    }
}




void MainWindow::on_comboBox_M_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_N->clear();
        ui->comboBox_N->addItem("floating");
        ui->comboBox_N->addItem("pull-up");
        ui->comboBox_N->addItem("pull-down");
        ui->comboBox_N->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_N->clear();
        ui->comboBox_N->addItem("push-pull");
        ui->comboBox_N->addItem("open-drain");
        ui->comboBox_N->addItem("alternate function push-pull");
        ui->comboBox_N->addItem("alternate function open-drain");
    }
}




void MainWindow::on_comboBox_O_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_P->clear();
        ui->comboBox_P->addItem("floating");
        ui->comboBox_P->addItem("pull-up");
        ui->comboBox_P->addItem("pull-down");
        ui->comboBox_P->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_P->clear();
        ui->comboBox_P->addItem("push-pull");
        ui->comboBox_P->addItem("open-drain");
        ui->comboBox_P->addItem("alternate function push-pull");
        ui->comboBox_P->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_Q_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_R->clear();
        ui->comboBox_R->addItem("floating");
        ui->comboBox_R->addItem("pull-up");
        ui->comboBox_R->addItem("pull-down");
        ui->comboBox_R->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_R->clear();
        ui->comboBox_R->addItem("push-pull");
        ui->comboBox_R->addItem("open-drain");
        ui->comboBox_R->addItem("alternate function push-pull");
        ui->comboBox_R->addItem("alternate function open-drain");
    }
}



void MainWindow::on_comboBox_S_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_T->clear();
        ui->comboBox_T->addItem("floating");
        ui->comboBox_T->addItem("pull-up");
        ui->comboBox_T->addItem("pull-down");
        ui->comboBox_T->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_T->clear();
        ui->comboBox_T->addItem("push-pull");
        ui->comboBox_T->addItem("open-drain");
        ui->comboBox_T->addItem("alternate function push-pull");
        ui->comboBox_T->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_U_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_V->clear();
        ui->comboBox_V->addItem("floating");
        ui->comboBox_V->addItem("pull-up");
        ui->comboBox_V->addItem("pull-down");
        ui->comboBox_V->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_V->clear();
        ui->comboBox_V->addItem("push-pull");
        ui->comboBox_V->addItem("open-drain");
        ui->comboBox_V->addItem("alternate function push-pull");
        ui->comboBox_V->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_W_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_X->clear();
        ui->comboBox_X->addItem("floating");
        ui->comboBox_X->addItem("pull-up");
        ui->comboBox_X->addItem("pull-down");
        ui->comboBox_X->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_X->clear();
        ui->comboBox_X->addItem("push-pull");
        ui->comboBox_X->addItem("open-drain");
        ui->comboBox_X->addItem("alternate function push-pull");
        ui->comboBox_X->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_Y_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_Z->clear();
        ui->comboBox_Z->addItem("floating");
        ui->comboBox_Z->addItem("pull-up");
        ui->comboBox_Z->addItem("pull-down");
        ui->comboBox_Z->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_Z->clear();
        ui->comboBox_Z->addItem("push-pull");
        ui->comboBox_Z->addItem("open-drain");
        ui->comboBox_Z->addItem("alternate function push-pull");
        ui->comboBox_Z->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_1_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("floating");
        ui->comboBox_2->addItem("pull-up");
        ui->comboBox_2->addItem("pull-down");
        ui->comboBox_2->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("push-pull");
        ui->comboBox_2->addItem("open-drain");
        ui->comboBox_2->addItem("alternate function push-pull");
        ui->comboBox_2->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_3_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_4->clear();
        ui->comboBox_4->addItem("floating");
        ui->comboBox_4->addItem("pull-up");
        ui->comboBox_4->addItem("pull-down");
        ui->comboBox_4->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_4->clear();
        ui->comboBox_4->addItem("push-pull");
        ui->comboBox_4->addItem("open-drain");
        ui->comboBox_4->addItem("alternate function push-pull");
        ui->comboBox_4->addItem("alternate function open-drain");
    }
}


void MainWindow::on_comboBox_5_activated(int index)
{
    if (index == 0)
    {
        ui->comboBox_6->clear();
        ui->comboBox_6->addItem("floating");
        ui->comboBox_6->addItem("pull-up");
        ui->comboBox_6->addItem("pull-down");
        ui->comboBox_6->addItem("analog");
    }
    else if (index == 1)
    {
        ui->comboBox_6->clear();
        ui->comboBox_6->addItem("push-pull");
        ui->comboBox_6->addItem("open-drain");
        ui->comboBox_6->addItem("alternate function push-pull");
        ui->comboBox_6->addItem("alternate function open-drain");
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

