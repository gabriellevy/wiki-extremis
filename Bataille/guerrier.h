#ifndef GUERRIER_H
#define GUERRIER_H

#include "TLMContreTLM/unite.h"
#include <QString>

class Guerrier : public Unite
{
public:
    Guerrier(int M = 2, int CC = 1, int CT = 2, int PV = 5, QString nom = "sans nom")
        :m_M(M), m_CC(CC), m_CT(CT), m_PV(PV), m_Nom(nom) {}

    int m_M;
    int m_CC;
    int m_CT;
    int m_PV;
    QString m_Nom;

    virtual QString GetNom() {return m_Nom;}
};

#endif // GUERRIER_H
