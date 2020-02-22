#ifndef CONDITION_H
#define CONDITION_H

#include <QString>
#include <QVector>
#include <memory>
#include "complement.h"

enum Comparateur {
    c_Egal,
    c_Superieur,
    c_SuperieurEgal,
    c_InferieurEgal,
    c_Inferieur,
    c_Different,
    c_Aucun
};

class Condition
{
public:
    Condition();
    Condition(QString caracId, QString valeur, Comparateur comparateur);

    virtual ~Condition() {}

    QString m_CaracId;// à remplacer tôt ou tard par "complément" ??
    std::shared_ptr<Complement> m_Complement = nullptr;

    QString m_Valeur = "0";
    Comparateur m_Comparateur = c_Aucun;

    bool Tester();

    // concertisseur string/Comparateur
    static Comparateur GetComparateurFromStr(QString compStr);
    static QString GetStrFromComparateur(Comparateur comp);
    static Comparateur GetComparateurFromStrSigne(QString comp);
};

#endif // CONDITION_H
