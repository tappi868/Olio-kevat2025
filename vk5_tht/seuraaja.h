#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
using namespace std;
class Seuraaja {
public:
    Seuraaja(string);

    string getNimi();

    Seuraaja* next = nullptr;

    void paivitys(string);
private:
    string nimi;
};

#endif // SEURAAJA_H
