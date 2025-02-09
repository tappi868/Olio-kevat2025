#include <iostream>
#include "notifikaatori.h"
#include "seuraaja.h"
using namespace std;

Notifikaattori::Notifikaattori(){
    cout << "Luodaan Notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *N)
{
    {
        cout << "Notifikaattori lisaa seuraajan " << N->getNimi() << endl;
        N->next = seuraajat;
        seuraajat = N;
    }

}

void Notifikaattori::poista(Seuraaja *N)
{
    if (N == nullptr || seuraajat == nullptr) return;

    cout << "Notifikaattori poistaa seuraajan " << N->getNimi() << endl;

    if (seuraajat == N) {
        seuraajat = seuraajat->next;
        delete N;
        return;
    }

    Seuraaja* current = seuraajat;
    while (current->next != nullptr && current->next != N) {
        current = current->next;
    }

    if (current->next == N) {
        current->next = N->next;
        delete N;
    }
}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin seuraajat: " << endl;

    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        cout << "Seuraaja " << current->getNimi() << endl;
        current = current->next;
    }
}

void Notifikaattori::postita(string P)
{
    cout << "Notifikaattori postaa viestin: " << P << endl;

    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        current->paivitys(P);
        current = current->next;
    }

}
