#ifndef CONTROLTABLEWIDGET_H
#define CONTROLTABLEWIDGET_H
#include <QTableWidget>
#include "Common.h"
class ControlTableWidget : public QTableWidget
{
    Q_OBJECT
public:

    explicit ControlTableWidget(QWidget *parent = nullptr);
    void initControlTableWidget();
    bool eventFilter(QObject *target, QEvent *event);          //事件过滤
    void deselect(QMouseEvent *mouseEvent);                    //取消选中
    static int selectedLine(QTableWidget * table);                                        // 选中行
    static void onShowLogMessage(QTableWidget * table ,bool LogIsOK, QString strMsg);
    static void onAddtoControlList(QTableWidget * table ,QString strIP, QString strArea, QString strPCName, QString strOS, QString strCPU, QString strCamera, QString strPing);

private slots:
    // 信号
    void onCurrentItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous);

};

#endif // CONTROLTABLEWIDGET_H
