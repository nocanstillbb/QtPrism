include($$PWD/../prismExport/prismExport.pri)

android{
QT += androidextras
DISTFILES += \  android/AndroidManifest.xml \
    android/build.gradle \
    android/gradle.properties \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    android/gradlew.bat \
    android/res/values/libs.xml
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

}


#RC_ICONS = shell.ico
android: DESTDIR = $$outrootdir/bin/$$QT_ARCH/
else: DESTDIR = $$outrootdir/bin/

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp

RESOURCES += qml.qrc

android{
bin.files =$$files($$rootdir/bin/$$kitname/$$QT_ARCH/**)
bin.path = $$rootdir/$$appname/android/libs/$$QT_ARCH/
COPIES += bin
}else{
bin.files =$$files($$rootdir/bin/$$kitname/**)
bin.path = $$outrootdir/bin/
COPIES += bin
}


android: LIBS += -L$$rootdir/bin/$$kitname/$$QT_ARCH/ -lprismCore_$${QT_ARCH}
else: LIBS += -L$$rootdir/bin/$$kitname/ -lprismCore

android: LIBS += -L$$rootdir/bin/$$kitname/$$QT_ARCH/ -lprismBootloader_$${QT_ARCH}
else: LIBS += -L$$rootdir/bin/$$kitname/ -lprismBootloader



