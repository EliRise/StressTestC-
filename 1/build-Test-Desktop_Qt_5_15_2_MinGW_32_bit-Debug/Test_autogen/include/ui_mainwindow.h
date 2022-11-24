/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_save;
    QAction *action_close;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *group_interfaces;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_6;
    QLabel *label_12C;
    QLabel *label_1Wire;
    QLabel *label_SPI;
    QLabel *label_UART;
    QComboBox *Box_WideBus;
    QLabel *label_USB;
    QComboBox *Box_1Wire;
    QComboBox *Box_USB;
    QComboBox *Box_SPI;
    QLabel *label_WideBus;
    QComboBox *Box_Ethernet;
    QComboBox *Box_UART;
    QComboBox *Box_12C;
    QLabel *label_Ethernet;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *group_GPIO;
    QGridLayout *gridLayout_2;
    QTableWidget *GPIO_table_Widget;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QPushButton *add_device;
    QPushButton *Added;
    QPushButton *Delete;
    QGroupBox *group_device;
    QGridLayout *gridLayout_3;
    QLabel *label_frequency_core;
    QComboBox *box_number;
    QComboBox *box_series;
    QSpinBox *box_frequency_core;
    QLabel *label_number;
    QLabel *label_series;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_8;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QPushButton *date_upload;
    QPushButton *open_file;
    QTabWidget *tabWidget;
    QWidget *Data;
    QGridLayout *gridLayout_5;
    QTreeView *treeView;
    QWidget *cmd;
    QGridLayout *gridLayout_8;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1024, 575);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(459, 311));
        MainWindow->setMaximumSize(QSize(1400, 795));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourses/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color:#ececec;\n"
"}\n"
"QPushButton, QToolButton, QCommandLinkButton{\n"
"    padding: 0 5px 0 5px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-right-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-left-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    color: #616161;\n"
"    font-weight: bold;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #fbfdfd, stop:0.5 #ffffff, stop:1 #fbfdfd);\n"
"}\n"
"QPushButton::default, QToolButton::default, QCommandLinkButton::default{\n"
"    border: 2px solid transparent;\n"
"    color: #FFFFFF;\n"
"    background-color: q"
                        "lineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QPushButton:hover, QToolButton:hover, QCommandLinkButton:hover{\n"
"    color: #3d3d3d;\n"
"}\n"
"QPushButton:pressed, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}\n"
"QPushButton:disabled, QToolButton:disabled, QCommandLinkButton:disabled{\n"
"    color: #616161;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #dce7eb, stop:0.5 #e0e8eb, stop:1 #dee7ec);\n"
"}\n"
"QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QDoubleSpinBox, QTimeEdit, QDateEdit, QDateTimeEdit {\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-right-color: qlineargradient(spread:"
                        "pad, x1:0, y1:0, x2:1, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-left-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    background-color: #f4f4f4;\n"
"    color: #3d3d3d;\n"
"}\n"
"QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus, QDoubleSpinBox:focus, QTimeEdit:focus, QDateEdit:focus, QDateTimeEdit:focus {\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 #85b7e3, stop:1 #9ec1db);\n"
"    border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #85b7e3, stop:1 #9ec1db);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #85b7e3, stop:1 #9ec1db);\n"
"    border-left-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:"
                        "0 #85b7e3, stop:1 #9ec1db);\n"
"    background-color: #f4f4f4;\n"
"    color: #3d3d3d;\n"
"}\n"
"QLineEdit:disabled, QTextEdit:disabled, QPlainTextEdit:disabled, QSpinBox:disabled, QDoubleSpinBox:disabled, QTimeEdit:disabled, QDateEdit:disabled, QDateTimeEdit:disabled {\n"
"    color: #b9b9b9;\n"
"}\n"
"QSpinBox::up-button, QDoubleSpinBox::up-button, QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px;\n"
"    color: #272727;\n"
"    border-left-width: 2px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 2px;\n"
"    padding: 2px;\n"
"}\n"
"QSpinBox::down-button, QDoubleSpinBox::down-button, QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"    width: 25px;\n"
"    color: #272727;\n"
"    border-left-width: 2px;\n"
"    border-left-co"
                        "lor: darkgray;\n"
"    border-left-style: solid;\n"
"    border-bottom-right-radius: 5px;\n"
"    padding: 2px;\n"
"}\n"
"QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed, QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed {\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}\n"
"QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed, QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed {\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}\n"
"QSpinBox::up-button:hover, QDoubleSpinBox::up-button:hover, QTimeEdit::up-button:hover, QDateEdit::up-button:hover, QDateTimeEdit::up-button:hover {\n"
"    color: #FFFFFF;\n"
"    border-top-right-radius: 50px;\n"
"    background-color: qli"
                        "neargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"    \n"
"}\n"
"QSpinBox::down-button:hover, QDoubleSpinBox::down-button:hover, QTimeEdit::down-button:hover, QDateEdit::down-button:hover, QDateTimeEdit::down-button:hover {\n"
"    color: #FFFFFF;\n"
"    border-bottom-right-radius: 50px;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QSpinBox::up-arrow, QDoubleSpinBox::up-arrow, QTimeEdit::up-arrow, QDateEdit::up-arrow, QDateTimeEdit::up-arrow {\n"
"    image: url(:/resourses/images/go-up-symbolic.symbolic.png);\n"
"width: 15px;\n"
"}\n"
"QSpinBox::down-arrow, QDoubleSpinBox::down-arrow, QTimeEdit::down-arrow, QDateEdit::down-arrow, QDateTimeEdit::down-arrow {\n"
"    image: url(:/resourses/images/go-down-symbolic.symbolic.png);\n"
"width: 15px;\n"
"	\n"
"}\n"
"QProgressBar {\n"
"    max-height: 8px;\n"
"    text-align: center;\n"
"    font: italic bold 11px;\n"
"    color: #3d3d3d;\n"
"    bo"
                        "rder: 1px solid transparent;\n"
"    border-radius:4px;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #ddd5d5, stop:0.5 #dad3d3, stop:1 #ddd5d5);\n"
"}\n"
"QProgressBar::chunk {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"    border-radius: 4px;\n"
"}\n"
"QProgressBar:disabled {\n"
"    color: #616161;\n"
"}\n"
"QProgressBar::chunk:disabled {\n"
"    background-color: #aeaeae;\n"
"}\n"
"QSlider::groove {\n"
"    border: 1px solid #bbbbbb;\n"
"    background-color: #52595d;\n"
"    border-radius: 4px;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"    height: 6px;\n"
"}\n"
"QSlider::groove:vertical {\n"
"    width: 6px;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background: #ffffff;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    border-color: rgb(207,207,207);\n"
"    width: 12px;\n"
"    margin: -5px 0;\n"
"    border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
""
                        "    background: #ffffff;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    border-color: rgb(207,207,207);\n"
"    height: 12px;\n"
"    margin: 0 -5px;\n"
"    border-radius: 7px;\n"
"}\n"
"QSlider::add-page, QSlider::sub-page {\n"
"    border: 1px transparent;\n"
"    background-color: #52595d;\n"
"    border-radius: 4px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #ddd5d5, stop:0.5 #dad3d3, stop:1 #ddd5d5);\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #ddd5d5, stop:0.5 #dad3d3, stop:1 #ddd5d5);\n"
"}\n"
"QSlider::ad"
                        "d-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled, QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #b9b9b9;\n"
"}\n"
"QComboBox, QFontComboBox {\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-left-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    background-color: #f4f4f4;\n"
"    color: #272727;\n"
"    padding-left: 5px;\n"
"}\n"
"QComboBox:editable, QComboBox:!editable, QComboBox::drop-down:editable, QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: #ffffff;\n"
"}\n"
"QComboBox"
                        "::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"    color: #272727;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"    image:url(:/resourses/images/go-down-symbolic.symbolic.png); \n"
"\n"
"	width:10px;\n"
"	\n"
"}\n"
"\n"
"QComboBox::down-arrow:on {\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid darkgray;\n"
"    border-radius: 8px;\n"
"    selection-background-color: #dadada;\n"
"    selection-color: #272727;\n"
"    color: #272727;\n"
"    background: white;\n"
"}\n"
"QLabel, QCheckBox, QRadioButton {\n"
"    color: #272727;\n"
"}\n"
"QCheckBox {\n"
"    padding: 2px;\n"
"}\n"
"QCheckBox:disabled, QRadioButton:disabled {\n"
"    color: #808086;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"    border-rad"
                        "ius:4px;\n"
"    border-style:solid;\n"
"    padding-left: 1px;\n"
"    padding-right: 1px;\n"
"    padding-bottom: 1px;\n"
"    padding-top: 1px;\n"
"    border-width:1px;\n"
"    border-color: transparent;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/resourses/images/object-select-symbolic.symbolic.png);\n"
"    height: 15px;\n"
"    width: 15px;\n"
"    border-style:solid;\n"
"    border-width: 1px;\n"
"    border-color: #48a5fd;\n"
"    color: #ffffff;\n"
"    border-radius: 3px;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #48a5fd, stop:0.5 #329cfb, stop:1 #48a5fd);\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    \n"
"    height: 15px;\n"
"    width: 15px;\n"
"    border-style:solid;\n"
"    border-width: 1px;\n"
"    border-color: #48a5fd;\n"
"    border-radius: 3px;\n"
"    background-color: #fbfdfa;\n"
"}\n"
"QLCDNumber {\n"
"    color: #616161;;\n"
"}\n"
"QMenuBar {\n"
"    background-color: #ececec;\n"
"}\n"
"QMenuBar::item {\n"
"    color: "
                        "#616161;\n"
"    spacing: 3px;\n"
"    padding: 1px 4px;\n"
"    background-color: #ececec;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #dadada;\n"
"    color: #3d3d3d;\n"
"}\n"
"QMenu {\n"
"    background-color: #ececec;\n"
"}\n"
"QMenu::item:selected {\n"
"    background-color: #dadada;\n"
"    color: #3d3d3d;\n"
"}\n"
"QMenu::item {\n"
"    color: #616161;;\n"
"    background-color: #e0e0e0;\n"
"}\n"
"QTabWidget {\n"
"    color:rgb(0,0,0);\n"
"    background-color:#000000;\n"
"}\n"
"QTabWidget::pane {\n"
"    border-color: #050a0e;\n"
"    background-color: #e0e0e0;\n"
"    border-width: 1px;\n"
"    border-radius: 4px;\n"
"    position: absolute;\n"
"    top: -0.5em;\n"
"    padding-top: 0.5em;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border-bottom: 1px solid #c0c0c0;\n"
"    padding: 3px;\n"
"    color: #272727;\n"
"    background-color: #fefefc;\n"
"    margin-left:0px;\n"
"}\n"
"QTabBar::tab:!last {\n"
"    border-right:"
                        " 1px solid;\n"
"    border-right-color: #c0c0c0;\n"
"    border-bottom-color: #c0c0c0;\n"
"}\n"
"QTabBar::tab:first {\n"
"    border-top-left-radius: 4px;\n"
"    border-bottom-left-radius: 4px;\n"
"}\n"
"QTabBar::tab:last {\n"
"    border-top-right-radius: 4px;\n"
"    border-bottom-right-radius: 4px;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QRadioButton::indicator {\n"
"    height: 14px;\n"
"    width: 14px;\n"
"    border-style:solid;\n"
"    border-radius:7px;\n"
"    border-width: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"    border-color: #48a5fd;\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius:0.4,fx:0.5, fy:0.5, stop:0 #ffffff, stop:0.5 #ffffff, stop:0.6 #48a5fd, stop:1 #48a5fd);\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"    border-color: #a9b7c6;\n"
"    background-color: #fbfdfa;"
                        "\n"
"}\n"
"QStatusBar {\n"
"    color:#027f7f;\n"
"}\n"
"\n"
"QDial {\n"
"    background: #16a085;\n"
"}\n"
"\n"
"QToolBox {\n"
"    color: #a9b7c6;\n"
"    background-color: #222b2e;\n"
"}\n"
"QToolBox::tab {\n"
"    color: #a9b7c6;\n"
"    background-color:#222b2e;\n"
"}\n"
"QToolBox::tab:selected {\n"
"    color: #FFFFFF;\n"
"    background-color:#222b2e;\n"
"}\n"
"QScrollArea {\n"
"    color: #FFFFFF;\n"
"    background-color:#222b2e;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"	max-height: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 0px 20px 0px 20px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"	max-width: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 20px 0px 20px 0px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"	background: #52595d;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover, QScrollBar::handle:vertical:hover {\n"
"	backgro"
                        "und: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"}\n"
"QScrollBar::add-line, QScrollBar::sub-line {\n"
"    border: 2px transparent grey;\n"
"    border-radius: 4px;\n"
"    subcontrol-origin: margin;\n"
"    background: #b9b9b9;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    width: 20px;\n"
"    subcontrol-position: right;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    height: 20px;\n"
"    subcontrol-position: bottom;\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"    width: 20px;\n"
"    subcontrol-position: left;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    height: 20px;\n"
"    subcontrol-position: top;\n"
"}\n"
"QScrollBar::add-line:vertical:pressed, QScrollBar::add-line:horizontal:pressed, QScrollBar::sub-line:horizontal:pressed, QScrollBar::sub-line:vertical:pressed {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"}\n"
"QScrollBar::add-page:horizon"
                        "tal, QScrollBar::sub-page:horizontal, QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"QScrollBar::up-arrow:vertical {\n"
"    image: url(:/resourses/images/go-up-symbolic.symbolic.png);\n"
"width: 10px;\n"
"}\n"
"QScrollBar::down-arrow:vertical {\n"
"    image: url(:/resourses/images/go-down-symbolic.symbolic.png);\n"
"width: 10px;\n"
"}\n"
"QScrollBar::left-arrow:horizontal {\n"
"    image: url(:/resourses/images/go-previous-symbolic.symbolic.png);\n"
"width: 10px;\n"
"}\n"
"QScrollBar::right-arrow:horizontal {\n"
"    image: url(:/resourses/images/go-next-symbolic.symbolic.png);\n"
"width: 10px;\n"
"}"));
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QString::fromUtf8("action_close"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        group_interfaces = new QGroupBox(centralwidget);
        group_interfaces->setObjectName(QString::fromUtf8("group_interfaces"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(group_interfaces->sizePolicy().hasHeightForWidth());
        group_interfaces->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(group_interfaces);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea_2 = new QScrollArea(group_interfaces);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 306, 359));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_12C = new QLabel(scrollAreaWidgetContents_3);
        label_12C->setObjectName(QString::fromUtf8("label_12C"));

        gridLayout_6->addWidget(label_12C, 3, 0, 1, 1);

        label_1Wire = new QLabel(scrollAreaWidgetContents_3);
        label_1Wire->setObjectName(QString::fromUtf8("label_1Wire"));

        gridLayout_6->addWidget(label_1Wire, 5, 0, 1, 1);

        label_SPI = new QLabel(scrollAreaWidgetContents_3);
        label_SPI->setObjectName(QString::fromUtf8("label_SPI"));

        gridLayout_6->addWidget(label_SPI, 2, 0, 1, 1);

        label_UART = new QLabel(scrollAreaWidgetContents_3);
        label_UART->setObjectName(QString::fromUtf8("label_UART"));

        gridLayout_6->addWidget(label_UART, 1, 0, 1, 1);

        Box_WideBus = new QComboBox(scrollAreaWidgetContents_3);
        Box_WideBus->addItem(QString());
        Box_WideBus->addItem(QString());
        Box_WideBus->setObjectName(QString::fromUtf8("Box_WideBus"));

        gridLayout_6->addWidget(Box_WideBus, 6, 1, 1, 1);

        label_USB = new QLabel(scrollAreaWidgetContents_3);
        label_USB->setObjectName(QString::fromUtf8("label_USB"));

        gridLayout_6->addWidget(label_USB, 0, 0, 1, 1);

        Box_1Wire = new QComboBox(scrollAreaWidgetContents_3);
        Box_1Wire->addItem(QString());
        Box_1Wire->addItem(QString());
        Box_1Wire->setObjectName(QString::fromUtf8("Box_1Wire"));

        gridLayout_6->addWidget(Box_1Wire, 5, 1, 1, 1);

        Box_USB = new QComboBox(scrollAreaWidgetContents_3);
        Box_USB->addItem(QString());
        Box_USB->addItem(QString());
        Box_USB->setObjectName(QString::fromUtf8("Box_USB"));
        Box_USB->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(Box_USB, 0, 1, 1, 1);

        Box_SPI = new QComboBox(scrollAreaWidgetContents_3);
        Box_SPI->addItem(QString());
        Box_SPI->addItem(QString());
        Box_SPI->setObjectName(QString::fromUtf8("Box_SPI"));

        gridLayout_6->addWidget(Box_SPI, 2, 1, 1, 1);

        label_WideBus = new QLabel(scrollAreaWidgetContents_3);
        label_WideBus->setObjectName(QString::fromUtf8("label_WideBus"));

        gridLayout_6->addWidget(label_WideBus, 6, 0, 1, 1);

        Box_Ethernet = new QComboBox(scrollAreaWidgetContents_3);
        Box_Ethernet->addItem(QString());
        Box_Ethernet->addItem(QString());
        Box_Ethernet->setObjectName(QString::fromUtf8("Box_Ethernet"));

        gridLayout_6->addWidget(Box_Ethernet, 4, 1, 1, 1);

        Box_UART = new QComboBox(scrollAreaWidgetContents_3);
        Box_UART->addItem(QString());
        Box_UART->addItem(QString());
        Box_UART->setObjectName(QString::fromUtf8("Box_UART"));

        gridLayout_6->addWidget(Box_UART, 1, 1, 1, 1);

        Box_12C = new QComboBox(scrollAreaWidgetContents_3);
        Box_12C->addItem(QString());
        Box_12C->addItem(QString());
        Box_12C->setObjectName(QString::fromUtf8("Box_12C"));

        gridLayout_6->addWidget(Box_12C, 3, 1, 1, 1);

        label_Ethernet = new QLabel(scrollAreaWidgetContents_3);
        label_Ethernet->setObjectName(QString::fromUtf8("label_Ethernet"));

        gridLayout_6->addWidget(label_Ethernet, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 7, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        gridLayout_4->addWidget(scrollArea_2, 3, 2, 1, 1);


        gridLayout->addWidget(group_interfaces, 1, 0, 1, 1);

        group_GPIO = new QGroupBox(centralwidget);
        group_GPIO->setObjectName(QString::fromUtf8("group_GPIO"));
        sizePolicy1.setHeightForWidth(group_GPIO->sizePolicy().hasHeightForWidth());
        group_GPIO->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(group_GPIO);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        GPIO_table_Widget = new QTableWidget(group_GPIO);
        GPIO_table_Widget->setObjectName(QString::fromUtf8("GPIO_table_Widget"));
        GPIO_table_Widget->setStyleSheet(QString::fromUtf8(""));
        GPIO_table_Widget->setAutoScroll(true);
        GPIO_table_Widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        GPIO_table_Widget->setSelectionMode(QAbstractItemView::SingleSelection);
        GPIO_table_Widget->setSelectionBehavior(QAbstractItemView::SelectRows);
        GPIO_table_Widget->setShowGrid(false);

        gridLayout_2->addWidget(GPIO_table_Widget, 0, 0, 1, 1);


        gridLayout->addWidget(group_GPIO, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        add_device = new QPushButton(groupBox_3);
        add_device->setObjectName(QString::fromUtf8("add_device"));

        verticalLayout->addWidget(add_device);

        Added = new QPushButton(groupBox_3);
        Added->setObjectName(QString::fromUtf8("Added"));

        verticalLayout->addWidget(Added);

        Delete = new QPushButton(groupBox_3);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        verticalLayout->addWidget(Delete);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        group_device = new QGroupBox(centralwidget);
        group_device->setObjectName(QString::fromUtf8("group_device"));
        gridLayout_3 = new QGridLayout(group_device);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_frequency_core = new QLabel(group_device);
        label_frequency_core->setObjectName(QString::fromUtf8("label_frequency_core"));

        gridLayout_3->addWidget(label_frequency_core, 2, 0, 1, 1);

        box_number = new QComboBox(group_device);
        box_number->setObjectName(QString::fromUtf8("box_number"));

        gridLayout_3->addWidget(box_number, 1, 1, 1, 1);

        box_series = new QComboBox(group_device);
        box_series->addItem(QString());
        box_series->addItem(QString());
        box_series->addItem(QString());
        box_series->setObjectName(QString::fromUtf8("box_series"));

        gridLayout_3->addWidget(box_series, 0, 1, 1, 1);

        box_frequency_core = new QSpinBox(group_device);
        box_frequency_core->setObjectName(QString::fromUtf8("box_frequency_core"));
        box_frequency_core->setStyleSheet(QString::fromUtf8(""));
        box_frequency_core->setMaximum(9999);

        gridLayout_3->addWidget(box_frequency_core, 2, 1, 1, 1);

        label_number = new QLabel(group_device);
        label_number->setObjectName(QString::fromUtf8("label_number"));

        gridLayout_3->addWidget(label_number, 1, 0, 1, 1);

        label_series = new QLabel(group_device);
        label_series->setObjectName(QString::fromUtf8("label_series"));

        gridLayout_3->addWidget(label_series, 0, 0, 1, 1);


        gridLayout->addWidget(group_device, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(335, 321));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
        gridLayout_9 = new QGridLayout(dockWidgetContents_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox = new QGroupBox(dockWidgetContents_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        date_upload = new QPushButton(groupBox);
        date_upload->setObjectName(QString::fromUtf8("date_upload"));

        gridLayout_7->addWidget(date_upload, 2, 0, 1, 1);

        open_file = new QPushButton(groupBox);
        open_file->setObjectName(QString::fromUtf8("open_file"));

        gridLayout_7->addWidget(open_file, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget = new QTabWidget(dockWidgetContents_8);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Data = new QWidget();
        Data->setObjectName(QString::fromUtf8("Data"));
        gridLayout_5 = new QGridLayout(Data);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        treeView = new QTreeView(Data);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setHeaderHidden(true);

        gridLayout_5->addWidget(treeView, 0, 0, 1, 1);

        tabWidget->addTab(Data, QString());
        cmd = new QWidget();
        cmd->setObjectName(QString::fromUtf8("cmd"));
        gridLayout_8 = new QGridLayout(cmd);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lineEdit = new QLineEdit(cmd);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_8->addWidget(lineEdit, 0, 0, 1, 1);

        textEdit = new QTextEdit(cmd);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_8->addWidget(textEdit, 1, 0, 1, 1);

        tabWidget->addTab(cmd, QString());

        gridLayout_9->addWidget(tabWidget, 1, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_close->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        group_interfaces->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\265\320\271\321\201\321\202\320\262\320\260\320\275\320\275\321\213\320\265 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\321\213", nullptr));
        label_12C->setText(QCoreApplication::translate("MainWindow", "12C", nullptr));
        label_1Wire->setText(QCoreApplication::translate("MainWindow", "1-Wire", nullptr));
        label_SPI->setText(QCoreApplication::translate("MainWindow", "SPI", nullptr));
        label_UART->setText(QCoreApplication::translate("MainWindow", "UART", nullptr));
        Box_WideBus->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_WideBus->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        label_USB->setText(QCoreApplication::translate("MainWindow", "USB", nullptr));
        Box_1Wire->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_1Wire->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        Box_USB->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_USB->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        Box_SPI->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_SPI->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        label_WideBus->setText(QCoreApplication::translate("MainWindow", "Wide-BUS", nullptr));
        Box_Ethernet->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_Ethernet->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        Box_UART->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_UART->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        Box_12C->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_12C->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        label_Ethernet->setText(QCoreApplication::translate("MainWindow", "Ethernet", nullptr));
        group_GPIO->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213 GPIO \320\277\320\276\321\200\321\202\320\276\320\262", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        add_device->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\216", nullptr));
        Added->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\321\200\321\202 GPIO", nullptr));
        Delete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        group_device->setTitle(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
        label_frequency_core->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\202\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \321\217\320\264\321\200\320\260", nullptr));
        box_series->setItemText(0, QCoreApplication::translate("MainWindow", "Akva", nullptr));
        box_series->setItemText(1, QCoreApplication::translate("MainWindow", "RNK", nullptr));
        box_series->setItemText(2, QCoreApplication::translate("MainWindow", "SVeI", nullptr));

        label_number->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        label_series->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\200\320\270\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\217", nullptr));
        date_upload->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\272\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        open_file->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 JSON \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Data), QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\213\321\202\320\260\320\273\321\201\321\217 \321\201\320\264\320\265\320\273\320\260\321\202\321\214 cmd<br />\320\237\320\276\320\272\320\260 \320\275\320\265 \320\262\321\213\321\205\320\276\320\264\320\270\321\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\320\276\320\274 \320\276\320\272\320\275\320\265 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\320\276"
                        " \320\260 \320\267\320\264\320\265\321\201\321\214 \320\262\321\201\320\265 \321\200\321\203\321\210\320\270\321\202\321\201\321\217 \320\275\320\260\321\207\320\270\320\275\320\260\320\265\321\202 </p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cmd), QCoreApplication::translate("MainWindow", "cmd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
