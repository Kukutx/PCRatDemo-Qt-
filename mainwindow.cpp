#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include "widget/TerminalWidget/terminalwidget.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(QStringLiteral("PCRatDemo"));
    menuBarEvent();
    toolbarEvent();

    // 右键菜单栏 绑定
    connect(ui->ControlPanel,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(onControlPanelMenu(QPoint)));
    connect(ui->LogMessagePanel,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(onLogMessagePanelMenu(QPoint)));


    // 底部状态栏
    // 底部状态栏初始化
    ipTarget = new QLabel("162.234.21.11", this);     // 状态栏：目标ip
    ipSource = new QLabel("192.168.1.1", this);       // 状态栏：内网ip
    myPort = new QLabel("8080", this);                // 状态栏：端口
    numConnect = new QLabel(this);                    // 状态栏：连接数
    myLink=new QLabel(this);                          // 状态栏：网址跳转
    currentTimeLabel = new QLabel(this);              // 状态栏：时间
    m_pProgressBar = new QProgressBar(this);          // 状态栏：进度条

    numConnect->setText(QString("连接: %1").arg(ui->ControlPanel->rowCount()));
    numConnect->setAlignment(Qt::AlignCenter);
    numConnect->setMinimumSize(numConnect->sizeHint());

    myLink->setFrameStyle(QFrame::Box|QFrame::Sunken);
    myLink->setText(tr("<a href=\"http://tengweitw.ueuo.com\">永久信息</a>"));
    myLink->setOpenExternalLinks(true);//设置可以打开网站链接

    m_pProgressBar->setTextVisible(true);     // 设置进度是否显示
    m_pProgressBar->setValue(0);              // 设置初始化进度位置
    m_pProgressBar->setMinimumWidth(200);

    ui->statusbar->addWidget(numConnect,0);
    ui->statusbar->addWidget(myLink,1);//显示永久信息
    ui->statusbar->addWidget(currentTimeLabel,3); //在状态栏添加此控件

    ui->statusbar->addPermanentWidget(m_pProgressBar);
    ui->statusbar->addPermanentWidget(ipTarget); //现实永久信息
    ui->statusbar->addPermanentWidget(ipSource);
    ui->statusbar->addPermanentWidget(myPort);

    QTimer *timer = new QTimer(this);           // 实时时间
    timer->start(1000);                         //每隔1000ms发送timeout的信号
    connect(timer, SIGNAL(timeout()),this,SLOT(time_update()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *event)
{
    // 点击主窗体最小化按钮时，需要将窗体隐藏，否则就会最小化到任务栏中了。
    // 事件类型是否等于窗体状态发生改变事件
    if (event->type() != QEvent::WindowStateChange) return;
    // 窗体状态等于最小化按钮
    if (this->windowState() == Qt::WindowMinimized) {
        this->hide();	                    // 隐藏窗体
        emit m_pTray->showTrayMessage();	// 最小化后消息提示框，隐藏窗体后应发射信号，调出托盘消息框！
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    int choose= QMessageBox::question(this, tr("退出程序"),
                                       QString(tr("确认退出程序?")),
                                       QMessageBox::Yes | QMessageBox::No);
    if (choose== QMessageBox::No)
    {
        event->ignore();  //忽略//程序继续运行
    }
    else if (choose== QMessageBox::Yes)
    {
        event->accept();  //介绍//程序退出
    }
}

void MainWindow::toolbarEvent()
{
    // 初始化ToolBar工具栏按键
    ui->btn_FileManager->setIcon(QIcon("://Resources/icon/ToolBarIcon/filemanager.ico"));
    ui->btn_RemoteTerminal->setIcon(QIcon("://Resources/icon/ToolBarIcon/terminal.ico"));
    ui->btn_KeyLogger->setIcon(QIcon("://Resources/icon/ToolBarIcon/keylogger.ico"));
    ui->btn_ScreenControl->setIcon(QIcon("://Resources/icon/ToolBarIcon/screen.ico"));
    ui->btn_VideoControl->setIcon(QIcon("://Resources/icon/ToolBarIcon/video.ico"));
    ui->btn_VoiceMonitor->setIcon(QIcon("://Resources/icon/ToolBarIcon/voice.ico"));
    ui->btn_SysManager->setIcon(QIcon("://Resources/icon/ToolBarIcon/sysmanager.ico"));
    ui->btn_RegistryManeger->setIcon(QIcon("://Resources/icon/ToolBarIcon/registry.ico"));
    ui->btn_Setting->setIcon(QIcon("://Resources/icon/ToolBarIcon/setting.ico"));
    ui->btn_About->setIcon(QIcon("://Resources/icon/ToolBarIcon/about.ico"));

    // 工具栏按钮
    connect(ui->btn_FileManager, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_RemoteTerminal, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_KeyLogger, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_ScreenControl, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_VideoControl, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_VoiceMonitor, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_SysManager, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_RegistryManeger, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_Setting, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
    connect(ui->btn_About, &QPushButton::clicked, this, [=]{ QMessageBox::about(this, tr("消息测试"), tr("测试"));});
}

void MainWindow::menuBarEvent()
{
    // 顶部菜单栏
    connect(ui->actionEsc, &QAction::triggered, this, [=]{ exit(0);});
    connect(ui->actionAbout, &QAction::triggered, this, [=]{
        QMessageBox::about(this, tr("About消息框"), tr("这是一个About消息框测试！"));
    });
}

void MainWindow::onControlPanelMenu(const QPoint pos)
{
    Q_UNUSED(pos)
    // 先集体断开连接然后重连免得出现多次触发槽函数问题
    m_pTableMenu->menuItem1->disconnect();
    m_pTableMenu->menuItem2->disconnect();
    m_pTableMenu->menuItem3->disconnect();
    m_pTableMenu->menuItem4->disconnect();
    m_pTableMenu->menuItem5->disconnect();
    m_pTableMenu->menuItem6->disconnect();
    m_pTableMenu->menuItem7->disconnect();
    m_pTableMenu->menuItem8->disconnect();
    m_pTableMenu->menuItem9->disconnect();
    m_pTableMenu->menuItem10->disconnect();
    m_pTableMenu->menuItem11->disconnect();

    // 设置响应事件
    connect(m_pTableMenu->menuItem1, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem2, &QAction::triggered, this, [=]{
        TerminalWidget *terminal = new TerminalWidget();
        terminal->show();
    });
    connect(m_pTableMenu->menuItem3, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem4, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem5, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem6, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem7, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem8, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem9, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem10, &QAction::triggered, this, [=]{ exit(0);});
    connect(m_pTableMenu->menuItem11, &QAction::triggered, this, [=]{
        int row = ControlTableWidget::selectedLine(ui->ControlPanel);
        ControlTableWidget::onShowLogMessage(ui->LogMessagePanel,true,"xxx.xxxx.xxx 连接以断开");   // 这块采用可考虑emit方式
        ui->ControlPanel->removeRow(row);                                         // 删除某一行
        numConnect->setText(QString("连接: %1").arg(ui->ControlPanel->rowCount()));
    });
    m_pTableMenu->controlMenu->move(cursor().pos());    // 设置菜单出现位置
    m_pTableMenu->controlMenu->show();                  // 菜单出现
    onEnbleMenu();
}

// 日志面板右键菜单栏
void MainWindow::onLogMessagePanelMenu(const QPoint pos)
{
    Q_UNUSED(pos)
    connect(m_pTableMenu->clearLog, &QAction::triggered, this, [=]{
        ui->LogMessagePanel->clearContents();                   // 清除表单内容不包含表头
        ui->LogMessagePanel->setRowCount(0);
    });
    m_pTableMenu->logMessageMenu->move(cursor().pos());
    m_pTableMenu->logMessageMenu->show();
}

void MainWindow::onEnbleMenu()
{
    QList<QTableWidgetItem*> items = ui->ControlPanel->selectedItems();
    (!items.empty())? m_pTableMenu->controlMenu->setEnabled(true) : m_pTableMenu->controlMenu->setEnabled(false);
}

void MainWindow::time_update()
{
    // 获取时间
    QDateTime current_time = QDateTime::currentDateTime();
    QString timestr = current_time.toString( "yyyy年MM月dd日 hh:mm:ss"); // 设置显示的格式
    currentTimeLabel->setText(timestr);          // 设置label的文本内容为时间
}

















void MainWindow::Test()
{
    ControlTableWidget::onAddtoControlList(ui->ControlPanel,"192.168.0.1", "localhosta阿斯顿撒旦大大撒旦啊大苏打", "Lang", "Windows7", "2.2GHZ", "yes", "123232");
    ControlTableWidget::onShowLogMessage(ui->LogMessagePanel,true, "断开连接");
}
