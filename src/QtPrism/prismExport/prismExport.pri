QT +=  quickcontrols2 qml widgets  core quick   gui
# To make threaded gl check...
QT += core-private gui-private quickcontrols2-private

CONFIG += c++17 utf8_source  file_copies
win32-msvc {
    QMAKE_CXXFLAGS += -Zc:preprocessor
}
HEADERS += \
    $$PWD/Interfaces/ILogServer.h \
    $$PWD/Interfaces/IPrismGlobalConfig.h \
    $$PWD/Interfaces/IPrismModule.h \
    $$PWD/Interfaces/ModuleDescription.h \
    $$PWD/prismBootloader/prismbootloader_global.h \
    $$PWD/prismBootloader/prismbootstraper.h \
    $$PWD/prismCore/prismIoc.h \
    $$PWD/prismCore/prismcore_global.h


INCLUDEPATH += $$PWD/../thridPart/
INCLUDEPATH += $$PWD/../thridPart/sqlite/

rootdir = $$PWD
rootdir ~= s,[\w+-]*$,,g
rootdir ~= s,[\/\\\\]$,,g

outrootdir = $$OUT_PWD
outrootdir ~= s,[\w+-]*$,,g
outrootdir ~= s,[\/\\\\]$,,g

kitname = $$OUT_PWD
kitname ~= s,[\w+-]*$,,g
kitname ~= s,[\/\\\\]$,,g
kitname ~= s,.*[\/\\\\],,g


appname = prismApp



