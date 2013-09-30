#-------------------------------------------------
#
# Project created by QtCreator 2013-09-29T20:08:29
#
#-------------------------------------------------

QT       -= gui

TARGET = core
TEMPLATE = lib

DEFINES += CORE_LIBRARY

SOURCES += \
    ServiceManager.cpp

HEADERS +=\
        core_global.hpp \
    ServiceManager.hpp

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
