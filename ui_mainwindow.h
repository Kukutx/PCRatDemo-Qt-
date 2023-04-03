/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <ControlTableWidget.h>
#include <ControlToolBar.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEsc;
    QAction *actionAbout;
    QAction *actionSetArg;
    QAction *actionCrtSrv;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *totalLayout;
    QHBoxLayout *toolBarLayout;
    QVBoxLayout *fileManagerLayout;
    ControlToolBar *btn_FileManager;
    QLabel *fileManager_label;
    QVBoxLayout *remoteTerminalLayout;
    ControlToolBar *btn_RemoteTerminal;
    QLabel *remoteTerminal_label;
    QVBoxLayout *keyLoggerLayout;
    ControlToolBar *btn_KeyLogger;
    QLabel *keyLogger_label;
    QVBoxLayout *screenControlLayout;
    ControlToolBar *btn_ScreenControl;
    QLabel *screenControl_label;
    QVBoxLayout *videoControlLayout;
    ControlToolBar *btn_VideoControl;
    QLabel *videoControl_label;
    QVBoxLayout *voiceMonitorLayout;
    ControlToolBar *btn_VoiceMonitor;
    QLabel *voiceManager_label;
    QVBoxLayout *sysManagerLayout;
    ControlToolBar *btn_SysManager;
    QLabel *sysManager_label;
    QVBoxLayout *registryManagerLayout;
    ControlToolBar *btn_RegistryManeger;
    QLabel *registryManager_label;
    QFrame *line;
    QVBoxLayout *settingLayout;
    ControlToolBar *btn_Setting;
    QLabel *setting_label;
    QVBoxLayout *aboutLayout;
    ControlToolBar *btn_About;
    QLabel *about_label;
    ControlTableWidget *ControlPanel;
    ControlTableWidget *LogMessagePanel;
    QMenuBar *menubar;
    QMenu *settingMenu;
    QMenu *fileMenu;
    QMenu *aboutMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(751, 505);
        actionEsc = new QAction(MainWindow);
        actionEsc->setObjectName("actionEsc");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionSetArg = new QAction(MainWindow);
        actionSetArg->setObjectName("actionSetArg");
        actionCrtSrv = new QAction(MainWindow);
        actionCrtSrv->setObjectName("actionCrtSrv");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setObjectName("gridLayout");
        totalLayout = new QVBoxLayout();
        totalLayout->setObjectName("totalLayout");
        toolBarLayout = new QHBoxLayout();
        toolBarLayout->setObjectName("toolBarLayout");
        fileManagerLayout = new QVBoxLayout();
        fileManagerLayout->setObjectName("fileManagerLayout");
        btn_FileManager = new ControlToolBar(centralWidget);
        btn_FileManager->setObjectName("btn_FileManager");

        fileManagerLayout->addWidget(btn_FileManager);

        fileManager_label = new QLabel(centralWidget);
        fileManager_label->setObjectName("fileManager_label");
        fileManager_label->setMaximumSize(QSize(16777215, 20));
        fileManager_label->setLayoutDirection(Qt::LeftToRight);
        fileManager_label->setAlignment(Qt::AlignCenter);

        fileManagerLayout->addWidget(fileManager_label);


        toolBarLayout->addLayout(fileManagerLayout);

        remoteTerminalLayout = new QVBoxLayout();
        remoteTerminalLayout->setObjectName("remoteTerminalLayout");
        btn_RemoteTerminal = new ControlToolBar(centralWidget);
        btn_RemoteTerminal->setObjectName("btn_RemoteTerminal");

        remoteTerminalLayout->addWidget(btn_RemoteTerminal);

        remoteTerminal_label = new QLabel(centralWidget);
        remoteTerminal_label->setObjectName("remoteTerminal_label");
        remoteTerminal_label->setMaximumSize(QSize(16777215, 20));
        remoteTerminal_label->setAlignment(Qt::AlignCenter);

        remoteTerminalLayout->addWidget(remoteTerminal_label);


        toolBarLayout->addLayout(remoteTerminalLayout);

        keyLoggerLayout = new QVBoxLayout();
        keyLoggerLayout->setObjectName("keyLoggerLayout");
        btn_KeyLogger = new ControlToolBar(centralWidget);
        btn_KeyLogger->setObjectName("btn_KeyLogger");

        keyLoggerLayout->addWidget(btn_KeyLogger);

        keyLogger_label = new QLabel(centralWidget);
        keyLogger_label->setObjectName("keyLogger_label");
        keyLogger_label->setMaximumSize(QSize(16777215, 20));
        keyLogger_label->setAlignment(Qt::AlignCenter);

        keyLoggerLayout->addWidget(keyLogger_label);


        toolBarLayout->addLayout(keyLoggerLayout);

        screenControlLayout = new QVBoxLayout();
        screenControlLayout->setObjectName("screenControlLayout");
        screenControlLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        screenControlLayout->setContentsMargins(-1, -1, 0, -1);
        btn_ScreenControl = new ControlToolBar(centralWidget);
        btn_ScreenControl->setObjectName("btn_ScreenControl");

        screenControlLayout->addWidget(btn_ScreenControl);

        screenControl_label = new QLabel(centralWidget);
        screenControl_label->setObjectName("screenControl_label");
        screenControl_label->setMaximumSize(QSize(16777215, 20));
        screenControl_label->setAlignment(Qt::AlignCenter);

        screenControlLayout->addWidget(screenControl_label);


        toolBarLayout->addLayout(screenControlLayout);

        videoControlLayout = new QVBoxLayout();
        videoControlLayout->setObjectName("videoControlLayout");
        btn_VideoControl = new ControlToolBar(centralWidget);
        btn_VideoControl->setObjectName("btn_VideoControl");

        videoControlLayout->addWidget(btn_VideoControl);

        videoControl_label = new QLabel(centralWidget);
        videoControl_label->setObjectName("videoControl_label");
        videoControl_label->setMaximumSize(QSize(16777215, 20));
        videoControl_label->setAlignment(Qt::AlignCenter);

        videoControlLayout->addWidget(videoControl_label);


        toolBarLayout->addLayout(videoControlLayout);

        voiceMonitorLayout = new QVBoxLayout();
        voiceMonitorLayout->setObjectName("voiceMonitorLayout");
        btn_VoiceMonitor = new ControlToolBar(centralWidget);
        btn_VoiceMonitor->setObjectName("btn_VoiceMonitor");

        voiceMonitorLayout->addWidget(btn_VoiceMonitor);

        voiceManager_label = new QLabel(centralWidget);
        voiceManager_label->setObjectName("voiceManager_label");
        voiceManager_label->setMaximumSize(QSize(16777215, 20));
        voiceManager_label->setAlignment(Qt::AlignCenter);

        voiceMonitorLayout->addWidget(voiceManager_label);


        toolBarLayout->addLayout(voiceMonitorLayout);

        sysManagerLayout = new QVBoxLayout();
        sysManagerLayout->setObjectName("sysManagerLayout");
        btn_SysManager = new ControlToolBar(centralWidget);
        btn_SysManager->setObjectName("btn_SysManager");

        sysManagerLayout->addWidget(btn_SysManager);

        sysManager_label = new QLabel(centralWidget);
        sysManager_label->setObjectName("sysManager_label");
        sysManager_label->setMaximumSize(QSize(16777215, 20));
        sysManager_label->setAlignment(Qt::AlignCenter);

        sysManagerLayout->addWidget(sysManager_label);


        toolBarLayout->addLayout(sysManagerLayout);

        registryManagerLayout = new QVBoxLayout();
        registryManagerLayout->setObjectName("registryManagerLayout");
        btn_RegistryManeger = new ControlToolBar(centralWidget);
        btn_RegistryManeger->setObjectName("btn_RegistryManeger");

        registryManagerLayout->addWidget(btn_RegistryManeger);

        registryManager_label = new QLabel(centralWidget);
        registryManager_label->setObjectName("registryManager_label");
        registryManager_label->setMaximumSize(QSize(16777215, 20));
        registryManager_label->setAlignment(Qt::AlignCenter);

        registryManagerLayout->addWidget(registryManager_label);


        toolBarLayout->addLayout(registryManagerLayout);

        line = new QFrame(centralWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        toolBarLayout->addWidget(line);

        settingLayout = new QVBoxLayout();
        settingLayout->setObjectName("settingLayout");
        btn_Setting = new ControlToolBar(centralWidget);
        btn_Setting->setObjectName("btn_Setting");

        settingLayout->addWidget(btn_Setting);

        setting_label = new QLabel(centralWidget);
        setting_label->setObjectName("setting_label");
        setting_label->setMaximumSize(QSize(16777215, 20));
        setting_label->setAlignment(Qt::AlignCenter);

        settingLayout->addWidget(setting_label);


        toolBarLayout->addLayout(settingLayout);

        aboutLayout = new QVBoxLayout();
        aboutLayout->setObjectName("aboutLayout");
        btn_About = new ControlToolBar(centralWidget);
        btn_About->setObjectName("btn_About");

        aboutLayout->addWidget(btn_About);

        about_label = new QLabel(centralWidget);
        about_label->setObjectName("about_label");
        about_label->setMaximumSize(QSize(16777215, 20));
        about_label->setAlignment(Qt::AlignCenter);

        aboutLayout->addWidget(about_label);


        toolBarLayout->addLayout(aboutLayout);


        totalLayout->addLayout(toolBarLayout);

        ControlPanel = new ControlTableWidget(centralWidget);
        if (ControlPanel->columnCount() < 7)
            ControlPanel->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ControlPanel->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ControlPanel->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ControlPanel->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ControlPanel->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ControlPanel->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ControlPanel->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ControlPanel->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (ControlPanel->rowCount() < 3)
            ControlPanel->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ControlPanel->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ControlPanel->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ControlPanel->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ControlPanel->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ControlPanel->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ControlPanel->setItem(0, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        ControlPanel->setItem(0, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        ControlPanel->setItem(0, 4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        ControlPanel->setItem(0, 5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        ControlPanel->setItem(0, 6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        ControlPanel->setItem(1, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        ControlPanel->setItem(1, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        ControlPanel->setItem(1, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        ControlPanel->setItem(1, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        ControlPanel->setItem(1, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        ControlPanel->setItem(1, 5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        ControlPanel->setItem(1, 6, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        ControlPanel->setItem(2, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        ControlPanel->setItem(2, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        ControlPanel->setItem(2, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        ControlPanel->setItem(2, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        ControlPanel->setItem(2, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        ControlPanel->setItem(2, 5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        ControlPanel->setItem(2, 6, __qtablewidgetitem30);
        ControlPanel->setObjectName("ControlPanel");
        ControlPanel->setMaximumSize(QSize(16777215, 16777215));
        ControlPanel->setStyleSheet(QString::fromUtf8(""));
        ControlPanel->setShowGrid(false);
        ControlPanel->setSortingEnabled(true);
        ControlPanel->verticalHeader()->setVisible(false);

        totalLayout->addWidget(ControlPanel);

        LogMessagePanel = new ControlTableWidget(centralWidget);
        if (LogMessagePanel->columnCount() < 4)
            LogMessagePanel->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        LogMessagePanel->setHorizontalHeaderItem(0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        LogMessagePanel->setHorizontalHeaderItem(1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        LogMessagePanel->setHorizontalHeaderItem(2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        LogMessagePanel->setHorizontalHeaderItem(3, __qtablewidgetitem34);
        if (LogMessagePanel->rowCount() < 1)
            LogMessagePanel->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        LogMessagePanel->setVerticalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        LogMessagePanel->setItem(0, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        LogMessagePanel->setItem(0, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        LogMessagePanel->setItem(0, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        LogMessagePanel->setItem(0, 3, __qtablewidgetitem39);
        LogMessagePanel->setObjectName("LogMessagePanel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogMessagePanel->sizePolicy().hasHeightForWidth());
        LogMessagePanel->setSizePolicy(sizePolicy);
        LogMessagePanel->setMinimumSize(QSize(0, 90));
        LogMessagePanel->setMaximumSize(QSize(16777215, 999999));
        LogMessagePanel->setStyleSheet(QString::fromUtf8(""));
        LogMessagePanel->setShowGrid(false);
        LogMessagePanel->setSortingEnabled(true);
        LogMessagePanel->verticalHeader()->setVisible(false);

        totalLayout->addWidget(LogMessagePanel);

        totalLayout->setStretch(1, 3);
        totalLayout->setStretch(2, 1);

        gridLayout->addLayout(totalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 751, 22));
        settingMenu = new QMenu(menubar);
        settingMenu->setObjectName("settingMenu");
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName("fileMenu");
        aboutMenu = new QMenu(menubar);
        aboutMenu->setObjectName("aboutMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(settingMenu->menuAction());
        menubar->addAction(aboutMenu->menuAction());
        settingMenu->addAction(actionSetArg);
        settingMenu->addAction(actionCrtSrv);
        fileMenu->addAction(actionEsc);
        aboutMenu->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEsc->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionSetArg->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        actionCrtSrv->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220\346\234\215\345\212\241\347\253\257", nullptr));
        btn_FileManager->setText(QString());
        fileManager_label->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\347\256\241\347\220\206", nullptr));
        btn_RemoteTerminal->setText(QString());
        remoteTerminal_label->setText(QCoreApplication::translate("MainWindow", "\350\277\234\347\250\213\347\273\210\347\253\257", nullptr));
        btn_KeyLogger->setText(QString());
        keyLogger_label->setText(QCoreApplication::translate("MainWindow", "\351\224\256\347\233\230\350\256\260\345\275\225", nullptr));
        btn_ScreenControl->setText(QString());
        screenControl_label->setText(QCoreApplication::translate("MainWindow", "\345\261\217\345\271\225\346\216\247\345\210\266", nullptr));
        btn_VideoControl->setText(QString());
        videoControl_label->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\346\216\247\345\210\266", nullptr));
        btn_VoiceMonitor->setText(QString());
        voiceManager_label->setText(QCoreApplication::translate("MainWindow", "\350\257\255\351\237\263\347\233\221\345\220\254", nullptr));
        btn_SysManager->setText(QString());
        sysManager_label->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\347\256\241\347\220\206", nullptr));
        btn_RegistryManeger->setText(QString());
        registryManager_label->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214\350\241\250\347\256\241\347\220\206", nullptr));
        btn_Setting->setText(QString());
        setting_label->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        btn_About->setText(QString());
        about_label->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ControlPanel->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ControlPanel->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\214\272\345\237\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ControlPanel->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\345\220\215/\345\244\207\346\263\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ControlPanel->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234\347\263\273\347\273\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ControlPanel->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "CPU", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ControlPanel->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ControlPanel->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "PING", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ControlPanel->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = ControlPanel->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = ControlPanel->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "3", nullptr));

        const bool __sortingEnabled = ControlPanel->isSortingEnabled();
        ControlPanel->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = ControlPanel->item(0, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "192.168.1.0", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = ControlPanel->item(0, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\233\2752423443424443424", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = ControlPanel->item(0, 2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "kukutx", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = ControlPanel->item(0, 3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "windows10", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = ControlPanel->item(0, 4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "intel2.2GHZ", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = ControlPanel->item(0, 5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = ControlPanel->item(0, 6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "65533", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = ControlPanel->item(1, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "192.168.1.1", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = ControlPanel->item(1, 1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\345\261\200\345\237\237\347\275\221787878777878787878787878777", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = ControlPanel->item(1, 2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Cmtx", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = ControlPanel->item(1, 3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "linux", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = ControlPanel->item(1, 4);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "AMD", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = ControlPanel->item(1, 5);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "no", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = ControlPanel->item(1, 6);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = ControlPanel->item(2, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "192.168.1.2", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = ControlPanel->item(2, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\345\261\200\345\237\237\347\275\221787878777878787878787878777", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = ControlPanel->item(2, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = ControlPanel->item(2, 3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "macos", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = ControlPanel->item(2, 4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "ARM", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = ControlPanel->item(2, 5);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "yes", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = ControlPanel->item(2, 6);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "1111", nullptr));
        ControlPanel->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem31 = LogMessagePanel->horizontalHeaderItem(0);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = LogMessagePanel->horizontalHeaderItem(1);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = LogMessagePanel->horizontalHeaderItem(2);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = LogMessagePanel->horizontalHeaderItem(3);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\345\206\205\345\256\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = LogMessagePanel->verticalHeaderItem(0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "1", nullptr));

        const bool __sortingEnabled1 = LogMessagePanel->isSortingEnabled();
        LogMessagePanel->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem36 = LogMessagePanel->item(0, 0);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214\346\210\220\345\212\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = LogMessagePanel->item(0, 1);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "21:55", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = LogMessagePanel->item(0, 2);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "2023/1/12", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = LogMessagePanel->item(0, 3);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "1111111", nullptr));
        LogMessagePanel->setSortingEnabled(__sortingEnabled1);

        settingMenu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        aboutMenu->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
