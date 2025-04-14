
#ifndef DEF_DUREE
#define DEF_DUREE
 
class Duree
{
public:
 
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    
    Duree& operator+(Duree const& a, Duree const& b);
    void afficher() const;

    bool Duree::estEgal(Duree const& b);
    bool Duree::estPlusPetitQue(const Duree &b) const;
 
private:
 
    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);

#endif