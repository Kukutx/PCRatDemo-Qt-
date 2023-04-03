#include "ControlSysTray.h"

ControlSysTray::ControlSysTray(QWidget *parent) : m_pParent(parent), QSystemTrayIcon(parent) {

    initControlSysTray();		// 初始化托盘
    addSysTrayMenu();	        // 初始化菜单
    this->show();		        // 显示托盘
}

ControlSysTray::~ControlSysTray()
{

}

void ControlSysTray::initControlSysTray()
{
    this->setToolTip("控制面板");                     	            	// 设置工具提示
    this->setIcon(QIcon("://Resources/icon/SystemTrayIcon/tray.ico"));	// 设置托盘图标
    // 点击托盘所作的操作
    connect(this, &ControlSysTray::activated, this, &ControlSysTray::onIconActivated);

    // 点击消息框后显示主页面
    connect(this, &ControlSysTray::messageClicked, [this] {
        m_pParent->activateWindow();
        m_pParent->showNormal();
    });

    // 显示系统托盘消息框
    connect(this, &ControlSysTray::showTrayMessage, this, &ControlSysTray::showMessage);
}

// 事件触发
void ControlSysTray::onIconActivated(QSystemTrayIcon::ActivationReason reason) {
    switch (reason)
    {
    case QSystemTrayIcon::Context:        // 右键触发
        trayMenu->exec(QCursor::pos());
        break;
    case QSystemTrayIcon::DoubleClick:
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    case QSystemTrayIcon::Trigger:                // 点击触发
        m_pParent->activateWindow();
        m_pParent->showNormal();
        break;
    default:
        break;
    }
}

// 菜单
void ControlSysTray::addSysTrayMenu() {
    trayMenu = new QMenu(m_pParent);		// 新建菜单，指定父对象
    // 新建菜单子项
    QAction *action1 = new QAction(trayMenu);
    QAction *action2 = new QAction(trayMenu);

    action1->setIcon(QIcon("://Resources/icon/SystemTrayIcon/show.ico"));	// 设置菜单图标
    action1->setText(QString("Show"));		// 设置带单文本
    action2->setIcon(QIcon("://Resources/icon/SystemTrayIcon/close.ico"));
    action2->setText(QString("Quit"));


    // 添加菜单子项
    trayMenu->addAction(action1);
    trayMenu->addAction(action2);

    // 显示窗体
    connect(action1, &QAction::triggered, [this](bool) {
        m_pParent->activateWindow();
        m_pParent->showNormal();
    });

    // 退出
    connect(action2, &QAction::triggered, [this](bool) { this->m_pParent->close(); });
}


// 消息框,弹出右下角消息框
void ControlSysTray::showMessage() {
    QSystemTrayIcon::showMessage("Notice",				   // 消息窗口标题
                              "The form is minimized!",    // 消息内容
                              QSystemTrayIcon::MessageIcon::Information,// 消息窗口图标
                              1000);					// 消息窗口显示时长(经测试，win10系统下，没有效果)
}
