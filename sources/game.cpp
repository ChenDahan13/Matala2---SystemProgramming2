#include <iostream>
#include "game.hpp"
using namespace std;

void Game::playAll() {
    cout << "Play all" << endl;
}
void Game::playTurn() {
    cout << p1.stacksize() - 1 << endl;
    this->p1.setSizeOfStack(p1.stacksize() - 1);
    this->p2.setSizeOfStack(p2.stacksize() - 1);
    cout << "Play turn" << endl;
}
void Game::printLastTurn() {
    cout << "Print last turn" << endl;
}
void Game::printLog() {
    cout << "Print log" << endl;
}
void Game::printStats() {
    cout << "Print state" << endl;
}
void Game::printWiner() {
    cout << "Print winner" << endl;
}