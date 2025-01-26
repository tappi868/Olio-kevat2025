#include "chef.h"
#include <iostream>
using namespace std;
Chef::Chef(string n)
{
    chefName = n;
    std::cout << chefName << " Konstruktori" << endl;

}

Chef::~Chef()
{
    cout << chefName << " Destruktori" << endl;


}
string Chef::getName()
{
    return chefName;


}

int Chef::makeSalad(int sa)
{
    return sa/5;

}

int Chef::makeSoup(int so)
{
    return so /3;

}
