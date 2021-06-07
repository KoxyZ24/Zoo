#include "zooturncount.h"


ZooTurnCount *ZooTurnCount::m_turnCount;


ZooTurnCount::ZooTurnCount(const QString &name)
    : ZooObject(name)
    , turnCount(0)
{

}

ZooTurnCount::~ZooTurnCount()
{
    qDebug() << "Suppression du temps, ouais c'est fort";
}

int ZooTurnCount::getTurnCount()
{
    return turnCount;
}

ZooTurnCount *ZooTurnCount::getInstance()
{
    if(m_turnCount == nullptr) {
        m_turnCount = new ZooTurnCount("Compteur de tour");
    }
    return m_turnCount;
}

void ZooTurnCount::nextTurn()
{
    turnCount+=1;
    qDebug() << "Fin du tour #" <<turnCount;
}


