#ifndef CROISADEFRANQUE_H
#define CROISADEFRANQUE_H

#include "Coutume/faction.h"

class Croise : public Guerrier
{
public:
    Croise():Guerrier(2, 3, 0, 9, "Croisé"){}
};

class CroisadeFranque  : public Faction
{
public:
    CroisadeFranque();
    ~CroisadeFranque() {}

    QVector<std::shared_ptr<EtatGuerrier>> GenererArmee();

};

#endif // CROISADEFRANQUE_H
