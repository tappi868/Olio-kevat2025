#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int game(int maxNum){
    srand(time(0));
    bool gameState = true;
    int randInt = rand() % maxNum;
    int arvaus;
    int arvausMr = 0;
    while (gameState== true){
        std::cout << "Yrtia arvata luku : " << endl;
        std::cin >> arvaus;
        if (arvaus < randInt){
            std::cout << "Arvaus liian pieni" <<endl;

        } else if (arvaus > randInt){
            std::cout << "Arvaus liian suuri"<< endl;
        } else {
            arvausMr++;
            return arvausMr;
        }
        arvausMr++;
    }



}


int main()
{

    int maxNum;
    std::cout << "Anna suurin arvottava luku: ";
    std::cin >> maxNum;
    int tulos = game(maxNum);
    std::cout << "Arvausten maara: "<< tulos << endl;
}
