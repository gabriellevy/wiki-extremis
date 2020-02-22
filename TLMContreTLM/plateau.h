#ifndef PLATEAU_H
#define PLATEAU_H

#include <QVector>
#include "case.h"
#include <memory>

class Plateau
{
public:
    Plateau();

    QVector<std::shared_ptr<Case>> m_Cases = {};

    std::shared_ptr<Case> GetCase(int x, int y);

    int m_Largeur = 3;
    int m_Hauteur = 3;
};

#endif // PLATEAU_H
