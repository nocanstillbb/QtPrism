#ifndef IPRISMGLOBALCACHE_H
#define IPRISMGLOBALCACHE_H

#include "../prismCore/prismcore_global.h"
#include "ModuleDescription.h"
#include <QtWidgets/QApplication>
#include <QObject>
#include <QtQml/QQmlEngine>
#include <QUrl>
#include <QtGlobal>

class PRISMCORE_EXPORT IPrismGlobalConfig
{
  public:
    QApplication* app;
    QQmlEngine* qmlEengn;
    virtual QUrl getMainQmlUrl() = 0;
    virtual std::vector<ModuleDescription> getModules() = 0;
};

#endif // IPRISMGLOBALCACHE_H
