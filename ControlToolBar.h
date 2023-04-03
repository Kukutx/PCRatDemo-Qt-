#ifndef CONTROLTOOLBAR_H
#define CONTROLTOOLBAR_H

#include<QPushButton>
#include "Common.h"

class ControlToolBar: public QPushButton
{
public:
    ControlToolBar(QWidget *parent = nullptr);
private:
    void initControlToolBar();
};

#endif // CONTROLTOOLBAR_H
