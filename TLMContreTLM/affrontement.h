#ifndef AFFRONTEMENT_H
#define AFFRONTEMENT_H

#include "compterendu.h"
#include <memory>

/**
 * @brief classe d'exécution des affrontements, génère un compte rendu
 * doit toujours être surclassée
 */
class Affrontement
{
public:
    Affrontement();
    virtual ~Affrontement() {}

    virtual std::shared_ptr<CompteRendu> Executer() = 0;
};

#endif // AFFRONTEMENT_H
