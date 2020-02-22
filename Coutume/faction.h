#ifndef FACTION_H
#define FACTION_H

#include <QVector>
#include <memory>
#include "principe.h"
#include "commandement.h"

class Faction
{
public:
    Faction();

    QVector<std::shared_ptr<Principe>> m_Principes = {};
    QVector<std::shared_ptr<Commandement>> m_Cmdts = {};
};

#endif // FACTION_H
