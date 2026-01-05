QT       += core gui
QT  +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_student.cpp \
    loading_page.cpp \
    main.cpp \
    mainwindow.cpp \
    sqlconnect.cpp \
    useredit.cpp

HEADERS += \
    add_student.h \
    loading_page.h \
    mainwindow.h \
    sqlconnect.h \
    useredit.h

FORMS += \
    add_student.ui \
    loading_page.ui \
    mainwindow.ui \
    useredit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourse.qrc \
    style.qrc
