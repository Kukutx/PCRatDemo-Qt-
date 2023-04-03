#include "TableMenuManagement.h"


TableMenuManagement::TableMenuManagement(QWidget *parent) : m_pParent(parent), QTableWidget(parent)
{
    this->hide();              // 隐藏窗口 ，因为不知道什么原因可能是 QTableWidget(parent) 这个的继承关系所以会出现意义不明的窗口
    initTableMenu();
}

void TableMenuManagement::initTableMenu()
{
    // 设置控制面板菜单选项
    controlMenu = new QMenu(m_pParent);
    menuItem1 = new QAction("远程管理",m_pParent);
    menuItem2 = new QAction("终端管理",m_pParent);
    menuItem3 = new QAction("进程管理",m_pParent);
    menuItem4 = new QAction("窗口管理",m_pParent);
    menuItem5 = new QAction("桌面管理",m_pParent);
    menuItem6 = new QAction("文件管理",m_pParent);
    menuItem7 = new QAction("语音管理",m_pParent);
    menuItem8 = new QAction("视频管理",m_pParent);
    menuItem9 = new QAction("服务管理",m_pParent);
    menuItem10 = new QAction("注册表管理",m_pParent);
    menuItem11 = new QAction("断开连接",m_pParent);
    // 定义日志输出面板选项
    logMessageMenu = new QMenu(m_pParent);
    clearLog = new QAction("清除",m_pParent);


    // 菜单栏样式
    controlMenu->setWindowFlags(controlMenu->windowFlags()  | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    controlMenu->setAttribute(Qt::WA_TranslucentBackground);
    controlMenu->setStyleSheet(QSS);

    // 添加控制端面板菜单选项
    controlMenu->addAction(menuItem1);
    controlMenu->addAction(menuItem2);
    controlMenu->addAction(menuItem3);
    controlMenu->addAction(menuItem4);
    controlMenu->addAction(menuItem5);
    controlMenu->addAction(menuItem6);
    controlMenu->addAction(menuItem7);
    controlMenu->addAction(menuItem8);
    controlMenu->addAction(menuItem9);
    controlMenu->addAction(menuItem10);
    controlMenu->addAction(menuItem11);
    // 添加日志端面板菜单选项
    logMessageMenu->addAction(clearLog);
}
