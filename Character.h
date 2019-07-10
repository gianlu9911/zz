//
// Created by gianluca on 02/07/19.
//


#ifndef CHARACTER_H_
#define CHARACTER_H_

//#include "Weapon.h"

// FIXME add all the needed const
class Character {
public:
    Character();//sf::Texture* texture, sf::Vector2u imageCount, float switchTime);




    ~Character();


    Character(const Character&);
    // TODO add assignment operator ?
    Character& operator=(const Character& other);

    void move(int x, int y);

    // TODO check...void move(int distance);



    int getPosX() const {
        return posX;
    }

    void setPosX(int posX) {
        Character::posX = posX;
    }

    int getPosY() const {
        return posY;
    }

    void setPosY(int posY) {
        Character::posY = posY;
    }

    int getHP() const;

    void setHP(int hp);

   // Weapon* getWeapon();

   // void setWeapon(Weapon* weapon);

    int getArmor() const;

    void setArmor(int defense);

    bool fight(Character &enemy);
    bool isLegalFight(const Character &enemy) const;

    int receiveDamage(int points);

    int getHp() const;

    void setHp(int hp);

    int getCritic() const;

    void setCritic(int critic);

    int getExp() const;

    void setExp(int exp);

    int getMaxEsp() const;

    void setMaxEsp(int maxEsp);

    int getLevel() const;

    void setLevel(int level);






    //animation




    //sf::IntRect uvRect;

   // void Update(int row, float deltaTime)

private:
    int HP;
    int armor;
    int posX;
    int posY;
  //  Weapon* weapon;
    int critic;
    int exp;
    int MaxEsp;
    int level;
    int MaxLevel;




    //animation




   // sf::Vector2u imageCount;
   // sf::Vector2u currentImage;
    //float totalTime;
    //float switchime;

};

#endif // CHARACTER_H_
