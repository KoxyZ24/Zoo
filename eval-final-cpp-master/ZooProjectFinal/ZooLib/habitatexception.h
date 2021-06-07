#ifndef HABITATEXCEPTION_H
#define HABITATEXCEPTION_H

#include <QString>
#include "zooobject.h"


class HabitatException : public ZooObject
{
    QString m_msg;

  public:
    HabitatException(QString msg);
    QString msg() const;

    void setMsg(const QString &msg);
    HabitatException();
};


#endif // HABITATEXCEPTION_H
