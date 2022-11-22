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
#include <QTableWidget>

#include <QStandardItem>
#include <QMessageBox>
#include <QStringList>

#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class TableRow : public QObject {

    Q_OBJECT

    QComboBox *modeCombo;
    QComboBox *pullMode;

    // Список значений для направления работы порта
    const QStringList directionStrings{"INPUT", "OUTPUT"};
    // Список значений для режима работы порта в состоянии "INPUT"
    const QStringList pullMode_I{"floating", "pull-up", \
                                 "pull-down", "analog"};
    // Список значений для режима работы порта в состоянии "OUTPUT"
    const QStringList pullMode_II{"push-pull", "open-drain", \
                                  "alternate function push-pull", \
                                  "alternate function open-drain"};

public:
    TableRow(QTableWidget * table, QObject * parent = nullptr) : QObject(parent) {
        uint32_t currentRows = table->rowCount();
        std::cout << currentRows << std::endl;
        table->setRowCount(currentRows + 1);
        std::cout << table->rowCount() << std::endl;

        modeCombo = new QComboBox();
        pullMode = new QComboBox();

        modeCombo->addItems(directionStrings);
        pullMode->addItems(pullMode_I);

        table->setCellWidget(currentRows, 0, modeCombo);
        table->setCellWidget(currentRows, 1, pullMode);

        connect(modeCombo, &QComboBox::currentTextChanged, this, &TableRow::updatePullMode);

        this->updatePullMode(directionStrings[0]);
    }

    ~TableRow() {
        delete modeCombo;
        delete pullMode;
    }

protected slots:
    void updatePullMode(QString text) {
        std::cout << text.toStdString() << std::endl;
        this->pullMode->clear();
        if (text.compare(directionStrings[0])) {
            this->pullMode->addItems(pullMode_I);
        } else if (text.compare(directionStrings[1])) {
            this->pullMode->addItems(pullMode_II);
        }
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QVector<TableRow*> tableRows;

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

    void on_Delete_clicked();

    void on_Box_USB_activated(int index);

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
