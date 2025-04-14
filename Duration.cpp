
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