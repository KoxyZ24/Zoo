#include "zoomessages.h"

#include <QObject>
#include <QDebug>

ZooMessages::ZooMessages(): ZooObject("")
{

}

void ZooMessages::addMessage(ZooMessage *message)
{
    messages.push_back(message);
//    qDebug() << "MESSAGES ARE : " << messages;
//    emit addedMessage(messages);
}

ZooMessages::MessagesList ZooMessages::getMessages() const
{
    return messages;
}

ZooMessages::MessagesList ZooMessages::getMessagesByErrorLevel(ZooErrorLevel lvl)
{
    MessagesList messageList;
    for(int i = 0; i < messages.size(); i++){
        if(messages.at(i)->getErrorLevel() == lvl){
            messageList.push_back(messages.at(i));
        }
    }
    return messageList;
}

ZooMessages::MessagesList ZooMessages::getMessagesByEmittor(ZooObject* emetteur)
{
    MessagesList messageList;
    for(int i=0; messages.size() - 1; i++){
        if(messages.at(i)->getEmittorName() == typeid(emetteur).name()){
            messageList.push_back(messages.at(i));
        }
    }
    return messageList;
}

