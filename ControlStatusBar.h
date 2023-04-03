#ifndef CONTROLSTATUSBAR_H
#define CONTROLSTATUSBAR_H

#include <QStatusBar>
#include "Common.h"

class ControlStatusBar: public QStatusBar
{
    Q_OBJECT
public:
    explicit ControlStatusBar(QWidget *parent = nullptr);
};

#endif // CONTROLSTATUSBAR_H
