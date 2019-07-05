#include "Character.h"
//
// Created by gianluca on 02/07/19.
//
#include <SFML/Graphics.hpp>
#include <bits/unique_ptr.h>
#include "Character.h"
#include <ctime>
#include <iostream>




using namespace std;

// FIXME use initializer list



Character::Character(){//sf::Texture* texture, sf::Vector2u imageCount, float switchTime) {
    HP =10 ;
    armor = 0;
    posX = 0;
    posY = 0;
  //  weapon = nullptr;
    critic = 0;
    exp = 0;

    //

   // this->imageCount = imageCount;
    //this->switchime = switchTime;
    //totalTime=0.0f;
    //currentImage.x =0;

    //uvRect.width = texture->getSize().x / float(imageCount.x);
    //uvRect.height = texture->getSize().y / float(imageCount.y);


}




Character::~Character() = default;
   // this->weapon = nullptr;





   // Character newplayer;//Todo solve
   // newplayer.weapon = gameCharacter.weapon;


Character& Character:: operator=(const Character &other){
   if(this!= &other){
       //if(inventory!=nullptr)
       //delete inventory;
       HP=other.HP;
       posX=other.posX;
       posY=other.posY;
       critic=other.critic;
       exp=other.exp;
       armor=other.armor;
       //TODO crea un metodo privato che richiama sia operatore sia costruttotre copia
       return *this;

   }
}



Character::Character(const Character&){

}




int Character::getHP() const {
    return HP;
}

void Character::setHP(int hp) {
    this->HP = hp;
}

//Weapon* Character::getWeapon() {
//  return weapon;
//}

//void Character::setWeapon(Weapon* weapon) {
//    this->weapon = weapon;
//}

void Character::move(int x, int y) {
    posX += x;
    posY += y;
}

//void Character::move(int distance) {
 //   posX += distance;
 //   posY += distance;
//}

int Character::getArmor() const {
    return armor;
}

void Character::setArmor(int defense) {
    this->armor = defense;
}

bool Character::fight(Character &enemy) {
    bool success = false;

    int hit = 1;
   // if (weapon)
   //     hit = weapon->use();

    int damage = 0;
    if (hit > enemy.getArmor()) {
        damage = enemy.receiveDamage(hit);
    }

    if (damage) {
        cout << "You hit the enemy ! (HP: " << enemy.getHP() << " punti)" << endl;
        success = true;
    } else
        cout << "You miss the hit..." << endl;
    return success;
}

int Character::receiveDamage(int points) {
    if (armor > 4)
        points /= 3;
    else if (armor > 2)
        points /= 2;
    else if (armor >= 1)
        points -= 2;

    if (points <= 0)
        points = 1;

    HP -= points;
    if (points > 10)
        armor--;

    return points;
}


bool Character::isLegalFight(const Character &enemy) const {
    int maxDistance = 1;
    if ((abs(posX - enemy.posX) > maxDistance) || (abs(posY - enemy.posY) > maxDistance))
        return false;
    return true;
}
