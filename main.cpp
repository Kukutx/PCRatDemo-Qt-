#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //加载QSS
    a.setStyle(QStyleFactory::create("fusion"));        // 行头样式
    a.setStyleSheet(QSS);                               // 选中行时变色
    return a.exec();
}
