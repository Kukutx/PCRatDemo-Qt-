#ifndef CONTROLSYSTRAY_H
#define CONTROLSYSTRAY_H

#include <QSystemTrayIcon>
#include "Common.h"

class ControlSysTray: public QSystemTrayIcon
{
    Q_OBJECT
public:
    ControlSysTray(QWidget *parent);	 // 不能指定默认值
    ~ControlSysTray();

private slots:
    void onIconActivated(QSystemTrayIcon::ActivationReason reason);	// 处理事件函数

private:
    void initControlSysTray();		// 初始化托盘
    void addSysTrayMenu();	        // 添加菜单
    void showMessage();		        // 显示消息框

signals:
    void showTrayMessage();		    // 触发显示系统托盘消息框

private:
    QWidget *m_pParent;	            // 父类，用于显示窗体
    QMenu *trayMenu;	            // 菜单
};

#endif // CONTROLSYSTRAY_H
