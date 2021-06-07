#ifndef ZOOMESSAGES_H
#define ZOOMESSAGES_H

#include "zoomessage.h"
#include "zooobject.h"

#include <QObject>
#include <QVector>


class ZooMessages : public ZooObject, public QObject
{
    typedef QVector<ZooMessage*> MessagesList;
    MessagesList messages;
public:
    ZooMessages();
    void addMessage(ZooMessage *message);

    MessagesList getMessages() const;
    MessagesList getMessagesByErrorLevel(ZooErrorLevel lvl);
    MessagesList getMessagesByEmittor(ZooObject *emetteur);

//signals:
//    void addedMessage(MessagesList);


};

#endif // ZOOMESSAGES_H
