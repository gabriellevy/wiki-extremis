#include "ucoutume.h"
#include "Factions/croisadefranque.h"

using std::make_shared;

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

}
