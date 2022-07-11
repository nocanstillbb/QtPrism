#include "prismui.h"
#include "../prismExport/prismCore/prismIoc.h"
#include <QtGui/private/qguiapplication_p.h>
#include <QtGui/qpa/qplatformintegration.h>

PrismUI::PrismUI(QObject* parent)
    : IPrismModule(parent)
{
}

void PrismUI::init()
{
    Q_INIT_RESOURCE(prismUI);
    IPrismModule::init();
}

void PrismUI::install()
{
    if (!QGuiApplicationPrivate::platform_integration->hasCapability(QPlatformIntegration::ThreadedOpenGL))
    {
        qDebug() << "QPlatformIntegration::ThreadedOpenGL 兼容检测不通过";
    }
    IPrismModule::install();
}

void PrismUI::uninstall()
{
    // As the render threads make use of our QGuiApplication object
    // to clean up gracefully, wait for them to finish before
    // QGuiApp is taken off the heap.
    //    for (QThread* t : qAsConst(ThreadRenderer::threads))
    //    {
    //        t->wait();
    //        delete t;
    //    }
    IPrismModule::uninstall();
}

QString PrismUI::moduleName()
{
    return PrismUI::staticMetaObject.className();
}

