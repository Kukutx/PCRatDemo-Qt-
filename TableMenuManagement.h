#ifndef TABLEMENUMANAGEMENT_H
#define TABLEMENUMANAGEMENT_H

#include "Common.h"

class TableMenuManagement: public QTableWidget
{
public:
    TableMenuManagement(QWidget *parent);

    // 命名控制端输出面板菜单选项
    QMenu *controlMenu;
    QAction *menuItem1;
    QAction *menuItem2;
    QAction *menuItem3;
    QAction *menuItem4;
    QAction *menuItem5;
    QAction *menuItem6;
    QAction *menuItem7;
    QAction *menuItem8;
    QAction *menuItem9;
    QAction *menuItem10;
    QAction *menuItem11;

    // 命名日志输出面板菜单选项
    QMenu *logMessageMenu;
    QAction *clearLog;


    void initTableMenu();


private:
    QWidget *m_pParent;	            // 父类，用于显示窗体
};

#endif // TABLEMENUMANAGEMENT_H
