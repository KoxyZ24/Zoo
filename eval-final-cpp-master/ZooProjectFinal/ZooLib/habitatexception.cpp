#include "habitatexception.h"

HabitatException::HabitatException(QString msg)
    :ZooObject("HabitatsException")
{
    m_msg = msg;
}

QString HabitatException::msg() const {
    return m_msg;
}

void HabitatException::setMsg(const QString &msg) {
    m_msg = msg;
}

