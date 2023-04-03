QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ControlStatusBar.cpp \
    ControlSysTray.cpp \
    ControlTableWidget.cpp \
    ControlToolBar.cpp \
    NetworkProcessing.cpp \
    ShowMessage.cpp \
    TableMenuManagement.cpp \
    main.cpp \
    mainwindow.cpp \
    widget/TerminalWidget/terminalwidget.cpp

HEADERS += \
    Common.h \
    ControlStatusBar.h \
    ControlSysTray.h \
    ControlTableWidget.h \
    ControlToolBar.h \
    NetworkProcessing.h \
    ShowMessage.h \
    TableMenuManagement.h \
    mainwindow.h \
    widget/TerminalWidget/terminalwidget.h

FORMS += \
    mainwindow.ui \
    widget/TerminalWidget/terminalwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    qss.qrc
