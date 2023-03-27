#include <iostream>
#include "player.hpp"

int Player::stacksize() {
    return this->sizeOfStack;
}
int Player::cardesTaken() {
    return this->numOfCardsTaken;
}
void Player::setSizeOfStack(int size){
    this->sizeOfStack = size;
}
void Player::setNumOfCardsTaken(int num){
    this->numOfCardsTaken = num;
}
void Player::setWinRate(int winRate){
    this->winRate = winRate;
}
void Player::setLoseRate(int loseRate){
    this->loseRate = loseRate;
}
