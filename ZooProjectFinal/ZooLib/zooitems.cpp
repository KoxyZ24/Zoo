#include "zooitems.h"

ZooItems *ZooItems::m_zooItems = nullptr;

ZooItems::~ZooItems()
{

}

ZooItems *ZooItems::getInstance()
{
    if (m_zooItems == nullptr)
    {
        m_zooItems = new ZooItems;
    }
    return m_zooItems;
}

ZooItems::ZooItems()
{

}
