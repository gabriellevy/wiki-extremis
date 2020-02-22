#ifndef BATAILLE_H
#define BATAILLE_H

#include "TLMContreTLM/affrontement.h"
#include "guerrier.h"
#include <QVector>
#include "etatguerrier.h"

class Bataille : public Affrontement
{
public:
    Bataille(QVector<EtatGuerrier> armee1, QVector<EtatGuerrier> armee2 )
        :m_Armee1(armee1), m_Armee2(armee2) {}

    virtual std::shared_ptr<CompteRendu> Executer();

    QVector<EtatGuerrier> m_Armee1 = {};
    QVector<EtatGuerrier> m_Armee2 = {};
};

#endif // BATAILLE_H
