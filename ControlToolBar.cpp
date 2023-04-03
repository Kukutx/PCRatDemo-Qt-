#include "ControlToolBar.h"

ControlToolBar::ControlToolBar(QWidget *parent) : QPushButton(parent)
{
    initControlToolBar();
}

void ControlToolBar::initControlToolBar()
{
    this->setIconSize(QSize(50, 50));
    this->setFlat(true);
}
