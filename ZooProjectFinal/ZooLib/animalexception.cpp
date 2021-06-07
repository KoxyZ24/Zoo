#include "animalexception.h"

AnimalException::AnimalException(QString msg)
    :ZooObject("AnimalException")
{
    m_msg = msg;
}

QString AnimalException::msg() const {
    return m_msg;
}

void AnimalException::setMsg(const QString &msg) {
    m_msg = msg;
}
