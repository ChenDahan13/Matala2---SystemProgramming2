#include "doctest.h"
#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include <stdexcept>
using namespace ariel;

bool checkCardType(Card c) {
    if(c.getType() == "1")
        return true;
    if(c.getType() == "2")
        return true;
    if(c.getType() == "3")
        return true;
    if(c.getType() == "4")
        return true;
    if(c.getType() == "5")
        return true;
    if(c.getType() == "6")
        return true;
    if(c.getType() == "8")
        return true;
    if(c.getType() == "9")
        return true;
    if(c.getType() == "10")
        return true;
    if(c.getType() == "Prince")
        return true;
    if(c.getType() == "Queen")
        return true;
    if(c.getType() == "King")
        return true;
    return false;
}

bool checkCardFamily(Card c) {
    if(c.getFamily() == "Diamonds")
        return true;
    if(c.getFamily() == "Spades")
        return true;
    if(c.getFamily() == "Hearts")
        return true;
    if(c.getFamily() == "Clubs")
        return true;
    return false;   
}

TEST_CASE("Methodes of card class") {
   Card c1("1", "Diamonds"); // Checks initial
   CHECK(checkCardType(c1) == true);
   CHECK(checkCardFamily(c1) == true);
   Card c2("King", "Hearts");
   CHECK(checkCardType(c2) == true);
   CHECK(checkCardFamily(c2) == true);
   Card c3("Cat", "Spades");
   CHECK(checkCardType(c3) == false);
   Card c4("13", "Leaves");
   CHECK(checkCardFamily(c4) == false);
   CHECK(checkCardType(c4) == false);
}

TEST_CASE("Methodes of player class") {
    Player p1("Chen"); // Checks initial
    int stacksize = p1.stacksize();
    CHECK(stacksize == 26);
    int cardstaken = p1.cardesTaken();
    CHECK(cardstaken == 0);
    int loserate = p1.getLoseRate();
    CHECK(loserate == 0);
    int winrate = p1.getWinRate();
    CHECK(winrate == 0);
    p1.setWinRate(p1.getWinRate ()+ 1);
    CHECK(p1.getWinRate() == 1);
    p1.setNumOfCardsTaken(p1.cardesTaken() + 1);
    CHECK(p1.cardesTaken() == 1);
    p1.setSizeOfStack(p1.stacksize() - 1);
    CHECK(p1.stacksize() == 25);
    p1.setLoseRate(p1.getLoseRate() + 2);
    CHECK(p1.getLoseRate() == 2);
}

TEST_CASE("Methodes of game class") {
    Player p1("Chen");
    Player p2("Ziv");
    Game game(p1,p2);
    int numofdraws = game.getNumOfDraws();
    int numofturns = game.getNumOfTurns();
    CHECK(numofdraws == 0);
    CHECK(numofturns == 0);
    game.playTurn();
    CHECK(p1.stacksize() == 25);
    CHECK(p2.stacksize() == 25);
    game.playTurn();
    CHECK(game.getP1().stacksize() == 24);
    CHECK(p2.stacksize() == 24);
}