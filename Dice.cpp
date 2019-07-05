//
// Created by gianluca on 02/07/19.
//

#include "Dice.h"
#include <ctime> // for time
#include <cstdlib> // for rand and srand




Dice::Dice() {
    srand( time(0));
     maxRoll=3;
     faces=10;
     numRoll=0;
}

Dice::~Dice() = default;



void Dice::roll() {
    for (int i = 0; i < maxRoll; i++) {
        if (i == maxRoll - 1) {
            i = 0;
        }
        numRoll = i;
    }

}