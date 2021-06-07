#include "zoohabitats.h"
#include "zoohabitat.h"

ZooHabitats *ZooHabitats::m_zooHabitats = nullptr;

ZooHabitats::ZooHabitats(): ZooObject("zoohabitat")
{

}

ZooHabitats::~ZooHabitats()
{
    foreach (auto habitat, zooHabitatList) { delete habitat; }
}

ZooHabitats *ZooHabitats::getInstance()
{
    if(m_zooHabitats == nullptr) {
        m_zooHabitats = new ZooHabitats();
    }
    return m_zooHabitats;
}

HabitatList ZooHabitats::getHabitats() const
{
    return zooHabitatList;
}
void ZooHabitats::addHabitat(ZooHabitat *zooHabitat)
{
    zooHabitatList.append(zooHabitat);
}

void ZooHabitats::removeHabitat(ZooHabitat *zooHabitat)
{
    zooHabitatList.removeOne(zooHabitat);
}


HabitatList ZooHabitats::getNotFull(QString animalType)
{
    HabitatList notFull;
    foreach(ZooHabitat *habitat, zooHabitatList)
    {
        if(  (habitat->getAnimalType() == animalType)
                            &&
             (habitat->getFreeSpace() !=0 )  )
        {
            notFull.append(habitat);
        }

    }
    return notFull;
}
