#include "widget.h"
#include "./ui_widget.h"




Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_process = new QProcess(this);
    connect(m_process, SIGNAL(readyReadStandardOutput()), this, SLOT(setStdout()) );
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(command()) );
}
Widget::~Widget()
{
    delete ui;
}
void Widget::setStdout()
{
    if(QSysInfo::productType()=="windows")
    {
        QTextCodec *codec = QTextCodec::codecForName("IBM 866");
        ui->textEdit->append( codec->toUnicode(m_process->readAllStandardOutput() ) );
    }
    else
        ui->textEdit->append( m_process->readAllStandardOutput() );
}
void Widget::command()
{
    QString strCommand;
    if(QSysInfo::productType()=="windows")
        strCommand = "cmd /C ";
    strCommand += ui->lineEdit->text();
    m_process->start(strCommand);
}
