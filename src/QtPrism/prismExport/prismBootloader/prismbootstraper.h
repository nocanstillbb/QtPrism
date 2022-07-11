#ifndef PRISMBOOTSTRAPER_H
#define PRISMBOOTSTRAPER_H
#include "prismbootloader_global.h"
#include <QApplication>
#include <QQmlApplicationEngine>

class PRISMBOOTLOADER_EXPORT prismBootstraper
{
  public:
    static int prismRun(QApplication& app, QQmlApplicationEngine& engine);
};

#endif // PRISMBOOTSTRAPER_H
