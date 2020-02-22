#ifndef ORDRE_H
#define ORDRE_H

#include <QString>
#include <QVector>
#include "condition.h"
#include <memory>

class Ordre
{
public:
    Ordre();
    virtual ~Ordre() {}

    virtual QString GetNom() = 0;

    std::shared_ptr<Condition> m_Condition = nullptr;
};

#endif // ORDRE_H
