#ifndef ZOOTURNCOUNT_H
#define ZOOTURNCOUNT_H

#include "zooanimals.h"
#include <QDebug>

class ZooTurnCount : public ZooObject
{
    static ZooTurnCount *m_turnCount;
    int turnCount;
    ZooTurnCount(const QString &name);

public:
    ~ZooTurnCount();
    int getTurnCount();
    static ZooTurnCount *getInstance();
    void nextTurn();
};

#endif // ZOOTURNCOUNT_H
