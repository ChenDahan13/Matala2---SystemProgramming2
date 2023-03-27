#pragma once
#include <iostream> 
#include <fstream>
#include <sstream>
#include "card.hpp"
using namespace std;
using namespace ariel;


class Player{
    string name;
    Card* stack;
    int sizeOfStack;
    int numOfCardsTaken;
    int winRate;
    int loseRate;
    
    public:
        Player() {
            name = "Chen";
            stack = NULL;
            numOfCardsTaken = 0;
            sizeOfStack = 26;
            winRate = 0;
            loseRate = 0;
        }
        Player(string name) {
            name = name;
            stack = NULL;
            numOfCardsTaken = 0;
            sizeOfStack = 26;
            winRate = 0;
            loseRate = 0;
        }
        void setSizeOfStack(int size);
        void setNumOfCardsTaken(int num);
        void setWinRate(int winRate);
        void setLoseRate(int loseRate);
        string getName() {
            return name;
        }
        int getWinRate() {
            return winRate;
        }
        int getLoseRate() {
            return loseRate;
        }
        int stacksize();
        int cardesTaken();
};



