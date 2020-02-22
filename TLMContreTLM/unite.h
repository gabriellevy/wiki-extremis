#ifndef UNITE_H
#define UNITE_H

#include <QString>
#include <QVector>
#include "ordre.h"
#include <memory>

/**
 * classe abstraite reprsentant les unités quel que soit le type de jeu
 */
class Unite
{
public:
    Unite();
    virtual ~Unite() {}

    virtual QString GetNom() = 0;

    QVector<std::shared_ptr<Ordre>> m_Ordres = {};
};

#endif // UNITE_H
