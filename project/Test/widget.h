#ifndef WIDGET_H
#define WIDGET_H
#include <QtCore>
#include <QWidget>
#include <QMainWindow>
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
#include <QStandardItemModel>
#include <QStandardItem>
#include <QMessageBox>
#include <QStringList>
#include <QtCore>
namespace Ui {
class Widget;
}
class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void setStdout();
    void command();
private:
    Ui::Widget *ui;
    QProcess *m_process;
};
#endif // WIDGET_H
