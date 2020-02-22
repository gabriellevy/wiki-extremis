#ifndef UCOUTUME_H
#define UCOUTUME_H

#include "faction.h"
#include <QVector>
#include <memory>

/**
 * @brief Univers du jeu TLM contre TLM Coutume
 */
class UCoutume
{
private:
    void GenererFactions();

public:
    UCoutume();

    void DeclencherTournoi();

    QVector<std::shared_ptr<Faction>> m_Factions = {};
};

#endif // UCOUTUME_H
