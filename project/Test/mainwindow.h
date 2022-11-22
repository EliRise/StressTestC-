#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLineEdit>
#include <QListView>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QFile>
#include <QFileDialog>

#include <QStandardItem>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QJsonDocument doc;
    QJsonArray docAr;
    QJsonParseError docError;


    QString globpath;
    QFile file;


private slots:   
    void on_radioButton_toggled(bool checked);

    void on_box_series_activated(int index);

    void on_open_file_clicked();

    void on_date_upload_clicked();


    void on_add_device_clicked();
     // СЛОТ для получения номера нажатой динамической кнопки

    void on_Added_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
