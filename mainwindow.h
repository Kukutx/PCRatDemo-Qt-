#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QProgressBar>
#include "ControlSysTray.h"
#include "TableMenuManagement.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();






    void Test();  //测试
public slots:
    void onControlPanelMenu(const QPoint pos);
    void onLogMessagePanelMenu(const QPoint pos);
    void time_update(); //时间更新槽函数，状态栏显示时间
protected:
    ControlSysTray *m_pTray = new ControlSysTray(this);            // 托盘
    TableMenuManagement *m_pTableMenu = new TableMenuManagement(this);
    void changeEvent(QEvent *event);                               // 捕捉最小化按钮
    void closeEvent(QCloseEvent *ev);                              // 重写关闭函数
    void toolbarEvent();                                           // 工具栏按钮绑定
    void menuBarEvent();                                           // 顶部菜单栏
    void onEnbleMenu();
private:
    QLabel *ipTarget;
    QLabel *ipSource;
    QLabel *myPort;
    QLabel *numConnect;
    QLabel *myLink;
    QLabel *currentTimeLabel; // 先创建一个QLabel对象
    QProgressBar * m_pProgressBar;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
