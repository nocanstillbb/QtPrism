include($$PWD/../prismExport/prismExport.pri)

TEMPLATE = lib
DEFINES += PRISMUI_LIBRARY


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    prismui.cpp

HEADERS += \
    prismUI_global.h \
    prismui.h

android: DESTDIR = $$rootdir/bin/$$kitname/$$QT_ARCH/
else: DESTDIR = $$rootdir/bin/$$kitname/

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH	= $$PWD/..
QML2_IMPORT_PATH = $$PWD/..

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH = $$PWD/..

android: LIBS += -L$$rootdir/bin/$$kitname/$$QT_ARCH/ -lprismCore_$${QT_ARCH}
else: LIBS += -L$$rootdir/bin/$$kitname/ -lprismCore


DISTFILES += \
    prismUI.json

RESOURCES += \
    prismUI.qrc

