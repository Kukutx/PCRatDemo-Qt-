#include "ControlStatusBar.h"

ControlStatusBar::ControlStatusBar(QWidget *parent) : QStatusBar(parent)
{
    this->showMessage("就绪", 3000); // 显示临时信息，时间3秒钟
    QLabel *per1 = new QLabel("Ready1", this);
    QLabel *per2 = new QLabel("Ready2", this);
    QLabel *per3 = new QLabel("Ready3", this);
    this->addPermanentWidget(per1); //现实永久信息
    this->addPermanentWidget(per2);
    this->insertPermanentWidget(2, per3);
}
