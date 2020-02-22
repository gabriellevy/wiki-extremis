#include "condition.h"

using std::shared_ptr;
using std::make_shared;

Condition::Condition():m_CaracId(""), m_Valeur(""), m_Comparateur(c_Egal)
{}

Condition::Condition(QString caracId, QString valeur, Comparateur comparateur):m_CaracId(caracId), m_Valeur(valeur), m_Comparateur(comparateur)
{}

Comparateur Condition::GetComparateurFromStrSigne(QString compStr)
{
    if (compStr == "==") return Comparateur::c_Egal;
    else if (compStr == ">") return Comparateur::c_Superieur;
    else if (compStr == ">=") return Comparateur::c_SuperieurEgal;
    else if (compStr == "<=") return Comparateur::c_InferieurEgal;
    else if (compStr == "<") return Comparateur::c_Inferieur;
    else if (compStr == "!=") return Comparateur::c_Different;
    return Comparateur::c_Aucun;
}

Comparateur Condition::GetComparateurFromStr(QString compStr)
{
    if (compStr == "c_Egal") return Comparateur::c_Egal;
    else if (compStr == "c_Superieur") return Comparateur::c_Superieur;
    else if (compStr == "c_SuperieurEgal") return Comparateur::c_SuperieurEgal;
    else if (compStr == "c_InferieurEgal") return Comparateur::c_InferieurEgal;
    else if (compStr == "c_Inferieur") return Comparateur::c_Inferieur;
    else if (compStr == "c_Different") return Comparateur::c_Different;
    return Comparateur::c_Aucun;
}

QString Condition::GetStrFromComparateur(Comparateur comp)
{
    if (comp == c_Egal) return "c_Egal";
    else if (comp == c_Superieur) return "c_Superieur";
    else if (comp == c_SuperieurEgal) return "c_SuperieurEgal";
    else if (comp == c_InferieurEgal) return "c_InferieurEgal";
    else if (comp == c_Inferieur) return "c_Inferieur";
    else if (comp == c_Different) return "c_Different";
    return "c_Aucun";
}

bool Condition::Tester()
{
    bool retour = true;

    /*QString valeurCarac;

    // la plupart des caracs viennent du perso mais certaines sont "spéciales" (si elles commencent par §)
    if ( m_CaracId == "§duree_effet_histoire")
    {
        valeurCarac = QString::number(
                    Univers::ME->GetExecHistoire()->EffetActuel(true)->GetTempEcoule());
    }
    else
        valeurCarac = IPerso::GetPersoCourant()->GetValeurCarac(m_CaracId);

    switch (m_Comparateur) {
    case c_Egal:
        retour = (valeurCarac == m_Valeur );
        break;
    case c_Superieur:
        retour = (valeurCarac.toDouble() > m_Valeur.toDouble() );
        break;
    case c_SuperieurEgal:
    {

        //QString str = "1234.56";
        //double valTmp = str.toDouble();
        double val1 = valeurCarac.toDouble();

        bool ok;
        double val2 = m_Valeur.toDouble(&ok);
        Q_ASSERT_X(ok, " Condition::Tester", (QString("Conversion de m_Valeur : "  + m_Valeur + " impossible")).toStdString().c_str());
        retour = ( val1 >= val2 );
        break;
    }
    case c_Inferieur:
        retour = (valeurCarac.toDouble() < m_Valeur.toDouble() );
        break;
    case c_InferieurEgal:
        retour = (valeurCarac.toDouble() <= m_Valeur.toDouble() );
        break;
    case c_Different:
        retour = (valeurCarac != m_Valeur );
        break;
    default:
        break;
    }*/

    return retour;
}


