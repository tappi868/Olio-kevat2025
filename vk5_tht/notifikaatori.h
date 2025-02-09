#ifndef NOTIFIKAATORI_H
#define NOTIFIKAATORI_H
#include <iostream>
#include "seuraaja.h"
using namespace std;
class Notifikaattori {
public:
    Notifikaattori();
    void lisaa(Seuraaja *N);
    void poista(Seuraaja *N);

    void tulosta();

    void postita(string P);
private:
    Seuraaja* seuraajat = nullptr;
};
#endif // NOTIFIKAATORI_H
