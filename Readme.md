```c++
// 选中行旧版本，这个返回值可以是int也可考虑QTableWidgetItem
void ControlTableWidget::selectedLine()
{
    QList<QTableWidgetItem*> items = this->selectedItems();  // 这个玩意可以完全尝试繁缛deselect，说不定能直接解决一切问题
    // 判断是否被选中
    if(!items.empty()){
        qDebug()<<STRCH("选中了某行");
//        int count = items.count();
//        QTableWidgetItem *item = items.at(0);
//        QString borrow_id= item->text();
//        qDebug()<<borrow_id << count;
    }
    else
        qDebug("0000");

    int count = items.count();
    static int row;
    for(int i = 0; i < count; i++)
    {
          row = this->row(items.at(i));
//        QTableWidgetItem *item = items.at(i);
//        QString text = item->text(); //获取内容
//        qDebug()<<text << row;

    }
    qDebug() << row;
    this->removeRow(row);// 删除某一行
}


```

```
对退出时 弹出窗口的补充
https://blog.csdn.net/GENGXINGGUANG/article/details/107430453


对选中行，添加Qlist为了方便未来的多行选中，并对右键菜单以及选中行相关代码进行优化，选中行时获取用list数组的方式获取一整行数据
https://blog.csdn.net/passionkk/article/details/45716441


带实现功能：右键菜单：会话管理，其他功能，更改备注，全部选择，取消选择。底部状态栏 ：本地内网ip与外网ip,上传下载流量监控，端口，
```

