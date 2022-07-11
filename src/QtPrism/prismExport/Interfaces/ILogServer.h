#ifndef ILOGSERVER_H
#define ILOGSERVER_H
#include <QtGlobal>
class ILogServer
{
  public:
    virtual void qdebugHook(QtMsgType type, const QMessageLogContext& context, const QString& msg)
    {
        Q_UNUSED(type);
        Q_UNUSED(context);
        Q_UNUSED(msg);
    };
    virtual ~ILogServer(){};
};

#endif // ILOGSERVER_H
