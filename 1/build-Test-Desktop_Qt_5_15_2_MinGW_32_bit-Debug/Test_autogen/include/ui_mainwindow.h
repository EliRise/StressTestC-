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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
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
    QComboBox *Box_12C;
    QComboBox *Box_Ethernet;
    QComboBox *Box_UART;
    QComboBox *Box_1Wire;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_WideBus;
    QLabel *label_12C;
    QComboBox *Box_USB;
    QLabel *label_SPI;
    QLabel *label_UART;
    QLabel *label_Ethernet;
    QComboBox *Box_WideBus;
    QLabel *label_USB;
    QLabel *label_1Wire;
    QComboBox *Box_SPI;
    QGroupBox *group_device;
    QGridLayout *gridLayout_3;
    QLabel *label_frequency_core;
    QComboBox *box_number;
    QComboBox *box_series;
    QSpinBox *box_frequency_core;
    QLabel *label_number;
    QLabel *label_series;
    QGroupBox *group_GPIO;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_5;
    QComboBox *comboBox_10;
    QComboBox *comboBox_24;
    QComboBox *comboBox_29;
    QComboBox *comboBox_5;
    QComboBox *comboBox;
    QComboBox *comboBox_30;
    QComboBox *comboBox_9;
    QComboBox *comboBox_20;
    QComboBox *comboBox_27;
    QComboBox *comboBox_28;
    QComboBox *comboBox_6;
    QComboBox *comboBox_23;
    QComboBox *comboBox_13;
    QComboBox *comboBox_15;
    QComboBox *comboBox_25;
    QComboBox *comboBox_21;
    QComboBox *comboBox_19;
    QComboBox *comboBox_4;
    QComboBox *comboBox_22;
    QComboBox *comboBox_31;
    QComboBox *comboBox_8;
    QComboBox *comboBox_11;
    QComboBox *comboBox_17;
    QComboBox *comboBox_12;
    QComboBox *comboBox_26;
    QComboBox *comboBox_32;
    QComboBox *comboBox_16;
    QComboBox *comboBox_7;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_18;
    QComboBox *comboBox_14;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *file;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(713, 595);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(459, 311));
        MainWindow->setMaximumSize(QSize(713, 595));
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
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 319, 355));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        Box_12C = new QComboBox(scrollAreaWidgetContents_3);
        Box_12C->addItem(QString());
        Box_12C->addItem(QString());
        Box_12C->setObjectName(QString::fromUtf8("Box_12C"));

        gridLayout_6->addWidget(Box_12C, 3, 1, 1, 1);

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

        Box_1Wire = new QComboBox(scrollAreaWidgetContents_3);
        Box_1Wire->addItem(QString());
        Box_1Wire->addItem(QString());
        Box_1Wire->setObjectName(QString::fromUtf8("Box_1Wire"));

        gridLayout_6->addWidget(Box_1Wire, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 7, 0, 1, 1);

        label_WideBus = new QLabel(scrollAreaWidgetContents_3);
        label_WideBus->setObjectName(QString::fromUtf8("label_WideBus"));

        gridLayout_6->addWidget(label_WideBus, 6, 0, 1, 1);

        label_12C = new QLabel(scrollAreaWidgetContents_3);
        label_12C->setObjectName(QString::fromUtf8("label_12C"));

        gridLayout_6->addWidget(label_12C, 3, 0, 1, 1);

        Box_USB = new QComboBox(scrollAreaWidgetContents_3);
        Box_USB->addItem(QString());
        Box_USB->addItem(QString());
        Box_USB->setObjectName(QString::fromUtf8("Box_USB"));

        gridLayout_6->addWidget(Box_USB, 0, 1, 1, 1);

        label_SPI = new QLabel(scrollAreaWidgetContents_3);
        label_SPI->setObjectName(QString::fromUtf8("label_SPI"));

        gridLayout_6->addWidget(label_SPI, 2, 0, 1, 1);

        label_UART = new QLabel(scrollAreaWidgetContents_3);
        label_UART->setObjectName(QString::fromUtf8("label_UART"));

        gridLayout_6->addWidget(label_UART, 1, 0, 1, 1);

        label_Ethernet = new QLabel(scrollAreaWidgetContents_3);
        label_Ethernet->setObjectName(QString::fromUtf8("label_Ethernet"));

        gridLayout_6->addWidget(label_Ethernet, 4, 0, 1, 1);

        Box_WideBus = new QComboBox(scrollAreaWidgetContents_3);
        Box_WideBus->addItem(QString());
        Box_WideBus->addItem(QString());
        Box_WideBus->setObjectName(QString::fromUtf8("Box_WideBus"));

        gridLayout_6->addWidget(Box_WideBus, 6, 1, 1, 1);

        label_USB = new QLabel(scrollAreaWidgetContents_3);
        label_USB->setObjectName(QString::fromUtf8("label_USB"));

        gridLayout_6->addWidget(label_USB, 0, 0, 1, 1);

        label_1Wire = new QLabel(scrollAreaWidgetContents_3);
        label_1Wire->setObjectName(QString::fromUtf8("label_1Wire"));

        gridLayout_6->addWidget(label_1Wire, 5, 0, 1, 1);

        Box_SPI = new QComboBox(scrollAreaWidgetContents_3);
        Box_SPI->addItem(QString());
        Box_SPI->addItem(QString());
        Box_SPI->setObjectName(QString::fromUtf8("Box_SPI"));

        gridLayout_6->addWidget(Box_SPI, 2, 1, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        gridLayout_4->addWidget(scrollArea_2, 3, 2, 1, 1);


        gridLayout->addWidget(group_interfaces, 1, 0, 1, 1);

        group_device = new QGroupBox(centralwidget);
        group_device->setObjectName(QString::fromUtf8("group_device"));
        gridLayout_3 = new QGridLayout(group_device);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_frequency_core = new QLabel(group_device);
        label_frequency_core->setObjectName(QString::fromUtf8("label_frequency_core"));

        gridLayout_3->addWidget(label_frequency_core, 2, 0, 1, 1);

        box_number = new QComboBox(group_device);
        box_number->addItem(QString());
        box_number->setObjectName(QString::fromUtf8("box_number"));

        gridLayout_3->addWidget(box_number, 1, 1, 1, 1);

        box_series = new QComboBox(group_device);
        box_series->addItem(QString());
        box_series->addItem(QString());
        box_series->addItem(QString());
        box_series->addItem(QString());
        box_series->addItem(QString());
        box_series->setObjectName(QString::fromUtf8("box_series"));

        gridLayout_3->addWidget(box_series, 0, 1, 1, 1);

        box_frequency_core = new QSpinBox(group_device);
        box_frequency_core->setObjectName(QString::fromUtf8("box_frequency_core"));
        box_frequency_core->setMaximum(9999);

        gridLayout_3->addWidget(box_frequency_core, 2, 1, 1, 1);

        label_number = new QLabel(group_device);
        label_number->setObjectName(QString::fromUtf8("label_number"));

        gridLayout_3->addWidget(label_number, 1, 0, 1, 1);

        label_series = new QLabel(group_device);
        label_series->setObjectName(QString::fromUtf8("label_series"));

        gridLayout_3->addWidget(label_series, 0, 0, 1, 1);


        gridLayout->addWidget(group_device, 0, 0, 1, 1);

        group_GPIO = new QGroupBox(centralwidget);
        group_GPIO->setObjectName(QString::fromUtf8("group_GPIO"));
        sizePolicy1.setHeightForWidth(group_GPIO->sizePolicy().hasHeightForWidth());
        group_GPIO->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(group_GPIO);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(group_GPIO);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 304, 498));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        comboBox_10 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));

        gridLayout_5->addWidget(comboBox_10, 8, 1, 1, 1);

        comboBox_24 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_24->setObjectName(QString::fromUtf8("comboBox_24"));

        gridLayout_5->addWidget(comboBox_24, 14, 0, 1, 1);

        comboBox_29 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_29->setObjectName(QString::fromUtf8("comboBox_29"));

        gridLayout_5->addWidget(comboBox_29, 12, 1, 1, 1);

        comboBox_5 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_5->addWidget(comboBox_5, 8, 0, 1, 1);

        comboBox = new QComboBox(scrollAreaWidgetContents_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_5->addWidget(comboBox, 0, 1, 1, 1);

        comboBox_30 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_30->setObjectName(QString::fromUtf8("comboBox_30"));

        gridLayout_5->addWidget(comboBox_30, 13, 1, 1, 1);

        comboBox_9 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout_5->addWidget(comboBox_9, 7, 1, 1, 1);

        comboBox_20 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_20->setObjectName(QString::fromUtf8("comboBox_20"));

        gridLayout_5->addWidget(comboBox_20, 10, 0, 1, 1);

        comboBox_27 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_27->setObjectName(QString::fromUtf8("comboBox_27"));

        gridLayout_5->addWidget(comboBox_27, 10, 1, 1, 1);

        comboBox_28 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_28->setObjectName(QString::fromUtf8("comboBox_28"));

        gridLayout_5->addWidget(comboBox_28, 11, 1, 1, 1);

        comboBox_6 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_5->addWidget(comboBox_6, 7, 0, 1, 1);

        comboBox_23 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_23->setObjectName(QString::fromUtf8("comboBox_23"));

        gridLayout_5->addWidget(comboBox_23, 13, 0, 1, 1);

        comboBox_13 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_13->setObjectName(QString::fromUtf8("comboBox_13"));

        gridLayout_5->addWidget(comboBox_13, 5, 0, 1, 1);

        comboBox_15 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_15->setObjectName(QString::fromUtf8("comboBox_15"));

        gridLayout_5->addWidget(comboBox_15, 3, 0, 1, 1);

        comboBox_25 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_25->setObjectName(QString::fromUtf8("comboBox_25"));

        gridLayout_5->addWidget(comboBox_25, 15, 0, 1, 1);

        comboBox_21 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_21->setObjectName(QString::fromUtf8("comboBox_21"));

        gridLayout_5->addWidget(comboBox_21, 11, 0, 1, 1);

        comboBox_19 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_19->setObjectName(QString::fromUtf8("comboBox_19"));

        gridLayout_5->addWidget(comboBox_19, 9, 0, 1, 1);

        comboBox_4 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_5->addWidget(comboBox_4, 1, 0, 1, 1);

        comboBox_22 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_22->setObjectName(QString::fromUtf8("comboBox_22"));

        gridLayout_5->addWidget(comboBox_22, 12, 0, 1, 1);

        comboBox_31 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_31->setObjectName(QString::fromUtf8("comboBox_31"));

        gridLayout_5->addWidget(comboBox_31, 14, 1, 1, 1);

        comboBox_8 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_5->addWidget(comboBox_8, 2, 1, 1, 1);

        comboBox_11 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_11->setObjectName(QString::fromUtf8("comboBox_11"));

        gridLayout_5->addWidget(comboBox_11, 6, 0, 1, 1);

        comboBox_17 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_17->setObjectName(QString::fromUtf8("comboBox_17"));

        gridLayout_5->addWidget(comboBox_17, 4, 0, 1, 1);

        comboBox_12 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));

        gridLayout_5->addWidget(comboBox_12, 6, 1, 1, 1);

        comboBox_26 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_26->setObjectName(QString::fromUtf8("comboBox_26"));

        gridLayout_5->addWidget(comboBox_26, 9, 1, 1, 1);

        comboBox_32 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_32->setObjectName(QString::fromUtf8("comboBox_32"));

        gridLayout_5->addWidget(comboBox_32, 15, 1, 1, 1);

        comboBox_16 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_16->setObjectName(QString::fromUtf8("comboBox_16"));

        gridLayout_5->addWidget(comboBox_16, 3, 1, 1, 1);

        comboBox_7 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_5->addWidget(comboBox_7, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_5->addWidget(comboBox_2, 1, 1, 1, 1);

        comboBox_3 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_5->addWidget(comboBox_3, 0, 0, 1, 1);

        comboBox_18 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_18->setObjectName(QString::fromUtf8("comboBox_18"));

        gridLayout_5->addWidget(comboBox_18, 4, 1, 1, 1);

        comboBox_14 = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_14->setObjectName(QString::fromUtf8("comboBox_14"));

        gridLayout_5->addWidget(comboBox_14, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 16, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 5, 0, 1, 1);


        gridLayout->addWidget(group_GPIO, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 713, 21));
        file = new QMenu(menubar);
        file->setObjectName(QString::fromUtf8("file"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(file->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        file->addSeparator();
        file->addAction(action_open);
        file->addAction(action_save);
        file->addAction(action_close);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_close->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        group_interfaces->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\265\320\271\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\265 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\321\213", nullptr));
        Box_12C->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_12C->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        Box_Ethernet->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_Ethernet->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        Box_UART->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_UART->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        Box_1Wire->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_1Wire->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        label_WideBus->setText(QCoreApplication::translate("MainWindow", "Wide-BUS", nullptr));
        label_12C->setText(QCoreApplication::translate("MainWindow", "12C", nullptr));
        Box_USB->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_USB->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        label_SPI->setText(QCoreApplication::translate("MainWindow", "SPI", nullptr));
        label_UART->setText(QCoreApplication::translate("MainWindow", "UART", nullptr));
        label_Ethernet->setText(QCoreApplication::translate("MainWindow", "Ethernet", nullptr));
        Box_WideBus->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_WideBus->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        label_USB->setText(QCoreApplication::translate("MainWindow", "USB", nullptr));
        label_1Wire->setText(QCoreApplication::translate("MainWindow", "1-Wire", nullptr));
        Box_SPI->setItemText(0, QCoreApplication::translate("MainWindow", "Activated", nullptr));
        Box_SPI->setItemText(1, QCoreApplication::translate("MainWindow", "Deactivated", nullptr));

        group_device->setTitle(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
        label_frequency_core->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\202\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \321\217\320\264\321\200\320\260", nullptr));
        box_number->setItemText(0, QCoreApplication::translate("MainWindow", "RT 1", nullptr));

        box_series->setItemText(0, QCoreApplication::translate("MainWindow", "Akva", nullptr));
        box_series->setItemText(1, QCoreApplication::translate("MainWindow", "BI", nullptr));
        box_series->setItemText(2, QCoreApplication::translate("MainWindow", "RNK", nullptr));
        box_series->setItemText(3, QCoreApplication::translate("MainWindow", "SVeI", nullptr));
        box_series->setItemText(4, QCoreApplication::translate("MainWindow", "BMI", nullptr));

        label_number->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        label_series->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\200\320\270\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        group_GPIO->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213 GPIO \320\277\320\276\321\200\321\202\320\276\320\262", nullptr));
        file->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
