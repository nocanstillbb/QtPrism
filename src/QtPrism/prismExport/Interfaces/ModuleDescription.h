#ifndef MODULEDESCRIPTION_H
#define MODULEDESCRIPTION_H

#include <QObject>

class ModuleDescription
{
  public:
    explicit ModuleDescription(int sortNumber, QString name)
    {
        this->Name = name;
        this->sortNumber = sortNumber;
    }
    QString Name{};
    int sortNumber{};

  signals:
};

#endif // MODULEDESCRIPTION_H
