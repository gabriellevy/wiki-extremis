#include "croisadefranque.h"

using std::make_shared;

CroisadeFranque::CroisadeFranque()
{

}


QVector<std::shared_ptr<EtatGuerrier>> CroisadeFranque::GenererArmee()
{
    return {make_shared<EtatGuerrier>(make_shared<Croise>(), 0,0)};
}
