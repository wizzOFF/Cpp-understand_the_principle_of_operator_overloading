
#include <iostream>
#include "Duree.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
    Duree duree1(0, 10, 28), duree2(0, 15, 2);

    if (duree1 != duree2)
    {
        cout << "Les durees sont differentes" << endl;
    }
    else
    {
        cout << "Les durees sont identiques" << endl;
    }
    
    return 0;
}