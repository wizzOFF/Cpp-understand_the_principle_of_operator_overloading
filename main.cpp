
#include <iostream>
#include "Duree.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
    Duree duree1(0, 10, 28), duree2(0, 10, 28);

    if (duree1 < duree2)
    {
        cout << "La première durée est plus petite" << endl;
    }
    else
    {
        cout << "La première durée n'est pas plus petite" << endl;
    }
    
    return 0;
}