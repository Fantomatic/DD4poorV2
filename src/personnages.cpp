#include "personnages.h"
#include <string>

using namespace std;

personnages::personnages(unsigned int life, unsigned int strength, string name, string description)
{
    life = life;
    strength = strength;
    name = name;
    description = description;
    level = 1;
}

personnages::personnages(unsigned int life, unsigned int strength, string name, string description, int level)
{
    life = life * level;
    strength = strength * level;
    name = name;
    description = description;
    level = level;
}

personnages::~personnages()
{
    //dtor
}

void personnages::attack(personnages cible)
{
    cible.takeDamage(Getstrength());
}

void personnages::takeDamage(int damage)
{
    Setlife(Getlife()-damage);
    checkDeath();
}

void personnages::checkDeath()
{
    if (life <= 0) {
//        ~personnages();
    }
}
