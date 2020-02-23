#ifndef FACTION_H
#define FACTION_H

#include <QVector>
#include <memory>
#include "principe.h"
#include "commandement.h"
#include "Bataille/etatguerrier.h"

class Faction
{
public:
    Faction();

    virtual QVector<std::shared_ptr<EtatGuerrier>> GenererArmee() = 0;

    QVector<std::shared_ptr<Principe>> m_Principes = {};
    QVector<std::shared_ptr<Commandement>> m_Cmdts = {};
};

#endif // FACTION_H
