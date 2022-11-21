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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
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
    QGroupBox *group_GPIO;
    QGridLayout *gridLayout_2;
    QTableWidget *GPIO_table_Widget;
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
    QMenuBar *menubar;
    QMenu *file;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_8;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QPushButton *open_file;
    QPushButton *date_upload;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1009, 605);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(459, 311));
        MainWindow->setMaximumSize(QSize(1400, 795));
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
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(group_GPIO->sizePolicy().hasHeightForWidth());
        group_GPIO->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(group_GPIO);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        GPIO_table_Widget = new QTableWidget(group_GPIO);
        GPIO_table_Widget->setObjectName(QString::fromUtf8("GPIO_table_Widget"));
        GPIO_table_Widget->setAutoScroll(true);
        GPIO_table_Widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        GPIO_table_Widget->setSelectionMode(QAbstractItemView::SingleSelection);
        GPIO_table_Widget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(GPIO_table_Widget, 0, 0, 1, 1);


        gridLayout->addWidget(group_GPIO, 1, 1, 1, 1);

        group_interfaces = new QGroupBox(centralwidget);
        group_interfaces->setObjectName(QString::fromUtf8("group_interfaces"));
        sizePolicy1.setHeightForWidth(group_interfaces->sizePolicy().hasHeightForWidth());
        group_interfaces->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(group_interfaces);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea_2 = new QScrollArea(group_interfaces);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 299, 365));
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

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1009, 21));
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
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(335, 253));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
        gridLayout_9 = new QGridLayout(dockWidgetContents_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox = new QGroupBox(dockWidgetContents_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        open_file = new QPushButton(groupBox);
        open_file->setObjectName(QString::fromUtf8("open_file"));

        gridLayout_7->addWidget(open_file, 0, 0, 1, 1);

        date_upload = new QPushButton(groupBox);
        date_upload->setObjectName(QString::fromUtf8("date_upload"));

        gridLayout_7->addWidget(date_upload, 2, 0, 1, 1);


        gridLayout_9->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents_8);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 0));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_8->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_2, 1, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_2);

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
        group_GPIO->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213 GPIO \320\277\320\276\321\200\321\202\320\276\320\262", nullptr));
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

        file->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\204\320\274\320\263\321\203\321\200\320\260\321\206\320\270\321\217", nullptr));
        open_file->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 JSON \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        date_upload->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\272\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
