#include "mainwindow.h"

#include <QWidget>
#include<QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleSheetFile("./Combinear.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);



    MainWindow w;
    w.setWindowTitle("Device configurator");
    w.show();
    return a.exec();
}
