//
// Created by gianluca on 02/07/19.
//

#include <iostream>
#include "Hero.h"
#include "Character.h"


Hero::Hero():Character() {
}

Hero::~Hero() =default;//{}TODO applicare modifica per weapon

//TODO void interact

void Hero::Growth() {
    int a=getMaxEsp();
    int b=getExp();
    int newExp=0;
     b+=newExp;


    if(a<=b){
        int level = getLevel();
        level++;
        //TODO se livello dispari aumenta potenza attk

        if(level%2==0) {
            int hp = getHp();
            hp++;
            setHp(hp);
        }
        //else ....
        int c=a-b;
        setLevel(level);
        setExp(c);

    }

}


bool Hero::death() {
    bool rip=false;
    int hp=getHP();
    if(hp==0){
        rip=true;
        std::cout<<"TU MORTO"<<std::endl;
        //aggiugere sprite
        //close window;

    }
    return rip;
}



//TODO mettere solo qui weapon?