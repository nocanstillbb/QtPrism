#ifndef IPRISMMODULE_H
#define IPRISMMODULE_H

#include <QDebug>
#include <QObject>

class IPrismModule : public QObject
{
    Q_OBJECT

public:
    explicit IPrismModule(QObject* parent = nullptr)
    {
        Q_UNUSED(parent)
    };
    virtual ~IPrismModule(){};
    virtual bool isUILib()
    {
        return false;
    }
    virtual QString moduleName()
    {
        return staticQtMetaObject.className();
    }
    virtual void registerTypes(){
        qDebug() << moduleName() << " registered typies!";
    };
    virtual void init()
    {
        qDebug() << moduleName() << " inited!";
    };
    virtual void install()
    {
        qDebug() << moduleName() << " installed!";
    };
    virtual void uninstall()
    {
        qDebug() << moduleName() << " uninstalled!";
    }
};

#define moduleInterface_iid "QtPrism.interface.IPrismModule/1.0"
Q_DECLARE_INTERFACE(IPrismModule, moduleInterface_iid)
#endif // IPRISMMODULE_H
