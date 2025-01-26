#include <iostream>
#include "chef.h"
#include "italianChef.h"

using namespace std;

int main()
{
    Chef olio1("Chef Luigi");
    cout << olio1.getName() << " with 16 items he can make: " <<olio1.makeSalad(16) << " portions of salad"  << endl;
    cout << olio1.getName() << " with 20 items he can make: " <<olio1.makeSoup(20) << " portions of soup"  << endl;
    ItalianChef olio2("Italianchef Mario");
    cout << olio2.getName() << " with 6 items he can make: " <<olio1.makeSalad(6) << " portions of salad"  << endl;
    if(olio2.askSecret("pizza",25,18)){

    }


    return 0;
}
