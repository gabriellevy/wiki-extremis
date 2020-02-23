#ifndef COMPTERENDU_H
#define COMPTERENDU_H

#include "scene.h"
#include <memory>
#include <QVector>

/**
 * classe contenant l'intégralité du déroulement d'un affrontement cad la scène de chacun de ses tours
 */
class CompteRendu
{
public:
    CompteRendu();

    void SauvegarderJson(QString nomFichier);

    QVector<std::shared_ptr<Scene>> m_Scenes = {};

};

#endif // COMPTERENDU_H
