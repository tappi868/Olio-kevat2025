#include <iostream>
#include "notifikaatori.h"
#include "seuraaja.h"

using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja* a = new Seuraaja("A");
    Seuraaja* b = new Seuraaja("B");
    Seuraaja* c = new Seuraaja("C");

    n.lisaa(a);
    n.lisaa(b);
    n.lisaa(c);

    n.tulosta();

    n.postita("Viesti 1");
    n.poista(b);
    n.postita("Viesti 2");
}
