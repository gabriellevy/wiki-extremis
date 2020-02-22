#ifndef ETATGUERRIER_H
#define ETATGUERRIER_H

#include "guerrier.h"
#include "TLMContreTLM/etatunite.h"

class EtatGuerrier : public EtatUnite
{
public:
    EtatGuerrier(std::shared_ptr<Guerrier> unite, int posX, int posY);
};

#endif // ETATGUERRIER_H
