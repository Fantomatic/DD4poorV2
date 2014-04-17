#include "personnages.h"
#include "variable.h"

personnages::personnages(unsigned int life, unsigned int strength, string name, string description)
{
    personnages.life = life;
    personnages.strength = strength;
    personnages.name = name;
    personnages.description = description;
    personnages.level = 1;
}

personnages::personnages(unsigned int life, unsigned int strength, string name, string description, int level)
{
    personnages.life = life * level;
    personnages.strength = strength * level;
    personnages.name = name;
    personnages.description = description;
    personnages.level = level;
}

personnages::~personnages()
{
    //dtor
}

personnages::personnages(const personnages& other)
{
    //copy ctor
}

virtual void personnages::attack(personnages cible)
{
    cible.takeDamage(personnages.strength);
}

void personnages::takeDamage(int damage)
{
    personnages.life-=damage;
    checkDeath();
}

void personnages::checkDeath()
{
 if (personnages.life <= 0) {
        personnages::~personnages()
 }
}
