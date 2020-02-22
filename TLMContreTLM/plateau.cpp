#include "plateau.h"

using std::make_shared;

Plateau::Plateau()
{
    for ( int i = 0; i < m_Largeur; ++i) {
        for ( int j = 0 ; j < m_Hauteur; ++j) {
            m_Cases.push_back(make_shared<Case>());
        }
    }
}

std::shared_ptr<Case> Plateau::GetCase(int x, int y)
{
    return m_Cases[y * m_Largeur + x];
}
