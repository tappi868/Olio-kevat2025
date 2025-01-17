#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;


class Game{
             public:
                Game();
                ~Game();
                void play();



            private:
                int maxNum;
                int playerGuess;
                int randomNumber;
                int numOfGuesses;
                void printGameResults();

};

#endif // GAME_H
