/********************************************************************************
** Form generated from reading UI file 'terminalwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINALWIDGET_H
#define UI_TERMINALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TerminalWidget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TerminalWidget)
    {
        if (TerminalWidget->objectName().isEmpty())
            TerminalWidget->setObjectName("TerminalWidget");
        TerminalWidget->resize(400, 300);
        pushButton = new QPushButton(TerminalWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 130, 75, 24));

        retranslateUi(TerminalWidget);

        QMetaObject::connectSlotsByName(TerminalWidget);
    } // setupUi

    void retranslateUi(QWidget *TerminalWidget)
    {
        TerminalWidget->setWindowTitle(QCoreApplication::translate("TerminalWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("TerminalWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TerminalWidget: public Ui_TerminalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINALWIDGET_H
