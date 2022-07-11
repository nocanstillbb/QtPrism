#ifndef PRISMIOC_H
#define PRISMIOC_H

#include "../prismExport/Interfaces/ILogServer.h"
#include "../prismExport/Interfaces/IPrismGlobalConfig.h"
#include "prismcore_global.h"
#include <functional>
#include <memory>

class PRISMCORE_EXPORT prismIoc
{
  public:
    static prismIoc* get();
    prismIoc(prismIoc&) = delete;
    prismIoc(prismIoc&&) = delete;
    prismIoc& operator=(prismIoc&) = delete;
    prismIoc& operator=(prismIoc&&) = delete;
    virtual void injectLogserviceInstance(std::shared_ptr<ILogServer> log) = 0;
    virtual void injectGlobalConfig(std::shared_ptr<IPrismGlobalConfig> log) = 0;

  protected:
    prismIoc();
};

#endif // PRISMIOC_H
