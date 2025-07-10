QT += core gui quick quickwidgets sql quickcontrols2

QTPLUGIN += qsqlpsql

QT_PLUGIN_PATH = 1

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += \
    headers \
    src \
    res

SOURCES += \
    src/booksmodel.cpp \
    src/dbmanager.cpp \
    src/main.cpp

HEADERS += \
    headers/booksmodel.h \
    headers/dbmanager.h \
    headers/queryies_list.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res/resources.qrc
