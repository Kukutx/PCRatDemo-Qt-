#include "ControlTableWidget.h"
#include "TableMenuManagement.h"

ControlTableWidget::ControlTableWidget(QWidget *parent) : QTableWidget(parent)
{
    initControlTableWidget();
}

void ControlTableWidget::initControlTableWidget()
{
    this->setShowGrid(false);
    this->setFocusPolicy(Qt::NoFocus);
    this->setSelectionBehavior(QAbstractItemView::SelectRows);   // 整行选中的方式
    this->setSelectionMode(QAbstractItemView::SingleSelection);  // 选中模式为单行选中  (暂且单选多选容易出问题)  MultiSelection 多选
    this->setEditTriggers(QAbstractItemView::NoEditTriggers);    // 禁止编辑
    this->setSortingEnabled(true);                               // 启动排序
    this->viewport()->installEventFilter(this);                  // 注册事件过滤,用于注册鼠标事件
    this->setContextMenuPolicy (Qt::CustomContextMenu);          // 注册菜单策略
    this->verticalHeader()->setDefaultSectionSize(DEFAULT_SECTION_SIZE);       //设置行默认高度
    // this->horizontalHeader()->setDefaultSectionSize(DEFAULT_SECTION_SIZE);  //设置行默认宽度;
    QHeaderView* headerView = this->horizontalHeader();
    headerView->setStretchLastSection(true);                      //行头自适应表格,设置表格是否充满，即行末不留空，缺陷只能让最后一个列拉长
    // headerView->setSectionResizeMode(QHeaderView::Stretch);
    headerView->setHighlightSections(false);                      //点击表时不对表头行光亮（获取焦点）

    /* 信号与槽 */
    // 设置表格行高行宽操作
    // 设置一个默认的行高，当选中行改变时(比如显示...内容被拉长的时候，因为没被拉长的时候行高会变高)，选中行恢复默认行高，当然也可以不处理，根据需求来。
    connect(headerView, &QHeaderView::sectionResized, [=]() {
        QTableWidgetItem *currentItem = this->currentItem();
        if (currentItem)
        {
            return;                                                // 当行内容被拉长的时候恢复默认高度
        }
        this->resizeRowToContents(this->row(currentItem));
    });
    connect(this, &ControlTableWidget::currentItemChanged, this, &ControlTableWidget::onCurrentItemChanged); // 绑定行元素变化函数
    connect(this, &ControlTableWidget::itemPressed, this, [=](QTableWidgetItem *item) {  // 这里主要通过监听QHeaderView的sectionResized信号实现。
        this->setCurrentItem(item);
    });
}

// 当行被选中时，宽度变高，没被选择时宽度变回默认  （不知道为什么必须要有中文才会拉高宽度）
void ControlTableWidget::onCurrentItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous)
{
    if (previous)                                                     // 判断行是否被选中，被选中跳过
    {
        this->setRowHeight(this->row(previous), DEFAULT_SECTION_SIZE);// 没被选中时，变回默认
    }
    this->resizeRowToContents(this->row(current));                    // 行变宽方便显示·那些太长变成...数的内容
}

// 事件过滤
bool ControlTableWidget::eventFilter(QObject *target, QEvent *event)
{
    QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);  //类型转换
    if (mouseEvent == nullptr)                                    //判空
    {
        return QWidget::eventFilter(target, event);
    }
    if (mouseEvent->type() == QEvent::MouseButtonPress || mouseEvent->type() == QEvent::MouseButtonRelease)  //判断事件类型为鼠标点击
    {
        deselect(mouseEvent);                                     //点击表格空白处取消选中
    }
    return QWidget::eventFilter(target, event);
}

// 取消选中项
void ControlTableWidget::deselect(QMouseEvent *mouseEvent)
{
    QPoint point = mouseEvent->pos();                         // 获取当前鼠标坐标
    QModelIndex index = this->indexAt(point);                 // 根据鼠标坐标，获取此时鼠标按下时所在的行、列
    this->item(index.row(), index.column());                  // 获取表格行与列的单元格
    if (this->item(index.row(), index.column()) == nullptr)   // 判断该单元格是否是空单元格
    {
        this->setCurrentItem(NULL);                           // 将单元格取消选中
    }
}

// 选中行
int ControlTableWidget::selectedLine(QTableWidget * table)
{
    QList<QTableWidgetItem*> items = table->selectedItems();
    int count = items.count();
    int row;
    for(int i = 0; i < count; i++)
    {
        row = table->row(items.at(i));
    }
    return row;
}

// 添加日志消息
void ControlTableWidget::onShowLogMessage(QTableWidget * table ,bool LogIsOK, QString strMsg)
{
    // 获取时间，日期，状态
    QString strIsOK, strData,strTime;
    QDateTime dataTime =QDateTime::currentDateTime();
    strTime = dataTime.toString("hh:mm:ss");
    strData = dataTime.toString("yyyy/MM/dd");
    if (LogIsOK)
    {
        strIsOK = "执行成功";
    }
    else {
        strIsOK = "执行失败";
    }
    int rowCount=table->rowCount();
    table->insertRow(rowCount);
    table->setItem(rowCount,0,new QTableWidgetItem(strIsOK));
    table->setItem(rowCount,1,new QTableWidgetItem(strTime));
    table->setItem(rowCount,2,new QTableWidgetItem(strData));
    table->setItem(rowCount,3,new QTableWidgetItem(strMsg));
}

// 添加控制面板行
void ControlTableWidget::onAddtoControlList(QTableWidget * table ,QString strIP, QString strArea, QString strPCName, QString strOS, QString strCPU, QString strCamera, QString strPing)
{
    int rowCount=table->rowCount();
    table->insertRow(rowCount);
    table->setItem(rowCount,0,new QTableWidgetItem(strIP));
    table->setItem(rowCount,1,new QTableWidgetItem(strArea));
    table->setItem(rowCount,2,new QTableWidgetItem(strPCName));
    table->setItem(rowCount,3,new QTableWidgetItem(strOS));
    table->setItem(rowCount,4,new QTableWidgetItem(strCPU));
    table->setItem(rowCount,5,new QTableWidgetItem(strCamera));
    table->setItem(rowCount,6,new QTableWidgetItem(strPing));
}















