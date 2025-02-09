#include <iostream>
#include "notifikaatori.h"
#include "seuraaja.h"
using namespace std;

Seuraaja::Seuraaja(string N)
{
    cout << "Luodaan seuraaja " << N << endl;
    nimi = N;
}

string Seuraaja::getNimi()
{
    return nimi;

}

void Seuraaja::paivitys(string P)
{
     cout << "Seuraaja " << nimi << " sai viestin: " << P << endl;

}


