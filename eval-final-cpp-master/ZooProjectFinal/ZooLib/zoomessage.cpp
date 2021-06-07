#include "zoomessage.h"
#include <QDebug>

ZooMessage::ZooMessage(ZooErrorLevel errorLevel, QString message, ZooObject *from)
    :ZooObject("message"), errorLevel(errorLevel), message(message), from(from)
{

}

ZooErrorLevel ZooMessage::getErrorLevel() const
{
    return errorLevel;
}

QString ZooMessage::getMessage() const
{
    return message;
}

ZooObject *ZooMessage::getFrom() const
{
    return from;
}

QString ZooMessage::getEmittorName()
{
    return typeid (from).name();
}
