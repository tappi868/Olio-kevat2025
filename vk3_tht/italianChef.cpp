#include "italianChef.h"
#include "chef.h"
ItalianChef::ItalianChef(string t): Chef (t)
{
    chefName = t;
    std::cout << chefName << " Konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << chefName << " Destruktori" << endl;
}

bool ItalianChef::askSecret(string p, int w, int f)
{
    water = w;
    flour = f;
    if (password.compare(p)==0){
        cout << "Password OK" <<endl;
        makePizza(water,flour);
        return true;


    } else {
        return false;
    }



}

int ItalianChef::makePizza(int w, int f)
{
    cout<< getName() << " with " << water << " water and " << f << " can make " << min(w/3,f/5) << " pizzas" << endl;



}
