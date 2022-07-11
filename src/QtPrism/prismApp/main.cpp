#include "../prismExport/prismBootloader/prismbootstraper.h"
#include "../prismExport/prismCore/prismIoc.h"
#include <QGuiApplication>
#include <QIcon>
#include <QMessageBox>
#include <QQmlApplicationEngine>

int main(int argc, char* argv[])
{

    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);

#ifdef Q_OS_WINDOWS
    //    QtWebEngine::initialize();
    qputenv("QT_ANGLE_PLATFORM", "d3d9"); //解决debug模式下 调整窗口的闪烁色块
#else
    QCoreApplication::setAttribute(Qt::AA_UseOpenGLES);
#endif

    QApplication app(argc, argv);
    QQmlApplicationEngine engine;

    app.setWindowIcon(QIcon("qrc:/shell.ico"));

    int code = prismBootstraper::prismRun(app, engine);
    return code;
}
