#ifndef ETATUNITE_H
#define ETATUNITE_H

#include "unite.h"
#include <memory>

/**
 * Cette clase contient l'état d'une unité à un instant t dans un compte rendu (dans une scène donc)
 * Elle contient donc en plus de l'unité elle-même sa position et ce qui a changé en elle depuis le début du compte rendu comme ses PV perdu etc...
 */
class EtatUnite
{
public:
    EtatUnite(std::shared_ptr<Unite> unite, int posX, int posY)
        :m_Unite(unite), m_PosX(posX), m_PosY(posY) {}

    std::shared_ptr<Unite> m_Unite;
    int m_PosX = -1;
    int m_PosY = 1;

    // ajouter les modifications de personnage
};

#endif // ETATUNITE_H
