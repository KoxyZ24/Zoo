#ifndef ANIMALEXCEPTION_H
#define ANIMALEXCEPTION_H

#include <QString>
#include "zooobject.h"


class AnimalException : public ZooObject
{
    QString m_msg;

  public:
    AnimalException(QString msg);
    QString msg() const;

    void setMsg(const QString &msg);
    AnimalException();
};


#endif // ANIMALEXCEPTION_H
