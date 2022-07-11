#ifndef PRISMUI_H
#define PRISMUI_H

#include "../prismExport/Interfaces/IPrismModule.h"
#include "prismUI_global.h"
#include <QObject>

class PRISMUI_EXPORT PrismUI : public IPrismModule
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "QtPrism.modules.prismUI/1.0" FILE "prismUI.json")
    Q_INTERFACES(IPrismModule)
  public:
    PrismUI(QObject* parent = nullptr);

    // IPrismModule interface
  public:
    void init() override;
    void install() override;

    void uninstall() override;

    QString moduleName() override;

    bool isUILib() override{return true;}
};

#endif // PRISMUI_H
