#include "ucoutume.h"
#include "Factions/croisadefranque.h"
#include "Bataille/bataille.h"

using std::make_shared;
using std::shared_ptr;

UCoutume::UCoutume()
{
    GenererFactions();
}

void UCoutume::GenererFactions()
{
    m_Factions.push_back(make_shared<CroisadeFranque>());
    m_Factions.push_back(make_shared<CroisadeFranque>());
}

void UCoutume::DeclencherTournoi()
{
    // TODO completement tmp :
    QVector<shared_ptr<EtatGuerrier>> armee1 = m_Factions[0]->GenererArmee();
    QVector<shared_ptr<EtatGuerrier>> armee2 = m_Factions[1]->GenererArmee();
    shared_ptr<Bataille> bataille = make_shared<Bataille>(
            armee1,
            armee2);
    std::shared_ptr<CompteRendu> cr = bataille->Executer();
    cr->SauvegarderJson("tmpJson.json");

}
