#include "game.h"
Game::Game()
{
    cout << "Anna suurin arvottava luku: ";
    cin >> maxNum;
    srand(time(0));
    randomNumber = rand() % maxNum;
    cout << "Peli aloitettu " << maxNum << " on suurin mahdollinen numero";

}

Game::~Game()
{
    printGameResults();
    cout << "Peli lopetettu";
}



void Game::printGameResults()
{
    cout<< "Voitit pelin. Oikea arvaus oli: "<< randomNumber<< endl;
    cout << "Arvausten maara: " << numOfGuesses;

}

void Game::play()
{
    numOfGuesses = 0;
    while (true){
        cout << "Yrtia arvata luku : " << endl;
        cin >> playerGuess;
        if (playerGuess < randomNumber){
            cout << "Arvaus liian pieni" <<endl;
            cout << randomNumber;


        } else if (playerGuess > randomNumber){
            cout << "Arvaus liian suuri"<< endl;
        } else {
            numOfGuesses++;
            break;
        }
        numOfGuesses++;
    }


}
