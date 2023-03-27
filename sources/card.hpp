#pragma once
#include <iostream>
using namespace std;
namespace ariel {
class Card {
    string type; // 1, 2, ..., king
    string family; // Hearts, diamonds...
    public:
        Card(string type, string family){
            this->type = type;
            this->family = family;
        }
        string getType() {
            return this->type;
        }
        string getFamily() {
            return this->family;
        }

};
}
