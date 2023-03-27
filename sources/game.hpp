
#include <iostream>
#include "player.hpp"
using namespace std;



class Game {
    Player p1;
    Player p2;
    Card* deck;
    int numOfDraws;
    int numOfTurns;

    public:
        Game(Player p1, Player p2) {
            this->p1 = p1;
            this->p2 = p2;
            deck = NULL;
            numOfDraws = 0;
            numOfTurns = 0;
        }
        int getNumOfDraws() {
            return numOfDraws;
        }
        int getNumOfTurns() {
            return numOfTurns;
        }
        Player getP1(){
            return p1;
        }
        Player getP2() {
            return p2;
        }
        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
};

