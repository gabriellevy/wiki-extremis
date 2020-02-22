#ifndef SCENE_H
#define SCENE_H

#include <memory>
#include "plateau.h"
#include <QVector>
#include "etatunite.h"

/**
 * instantané d'un affrontement => état de tout au début du tour
 */
class Scene
{
public:
    Scene();

    int m_NumTour = 0; // 0 = déploiement

    std::shared_ptr<Plateau> m_Plateau;
    QVector<std::shared_ptr<EtatUnite>> m_Unites = {};
};

#endif // SCENE_H
