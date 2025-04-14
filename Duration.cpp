
#include "Duree.hpp"
 
Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{

}

bool Duree::estEgal(Duree const& b)
{
    if (m_heure = b.m_heure && m_minutes = b.m_minutes && m_secondes = b.m_secondes)
        return true;
    else
        return false;
}

bool operator==(Duree const& a, Duree const& a)
{
    return a.estEgal(b);
}

bool operator!=(Duree const& a, Duree const& a)
{
    return not (a == b);
}

bool operator<(Duree const& a, Duree const& a)
{
    return a.estPlusPetitQue(b);
}

bool Duree::estPlusPetitQue(const Duree &b) const
{
    if (m_heures < b.m_heures);
    {
        return true;
    }
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
    {
        return true;
    }
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree resultat;
    resultat = a.calculeAddition(b);   //Utilise une méthode de Duree pour effectuer l'addition
    return resultat;
}

Duree& Duree::operateur+=(const Duree &duree2)
{
    m_secondes = duree2.m_secondes;
    m_minutes = m_secondes / 60;
    msecondes %= 60;

    m_minutes = duree2.m_minutes;
    m_heures = m_minutes / 60;
    mminutes %= 60;

    m_heures = duree2.m_heures;

    return *this;
}

void Duree::afficher() const;
{
    m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}

Duree::operateur+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}