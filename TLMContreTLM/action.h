#ifndef ACTION_H
#define ACTION_H

#include <QString>
#include <QVector>
#include <memory>
#include "complement.h"
#include "verbe.h"

class Action
{
public:
    Action();

    std::shared_ptr<Complement> m_Complement = nullptr;
    std::shared_ptr<Verbe> m_Verbe = nullptr;
};

#endif // ACTION_H
