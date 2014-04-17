#include "heroes.h"
#include "variable.h"

heroes::heroes() : personnages(unsigned int life, unsigned int strength, string name, string description)
{
    heroes.weapon = weapons(1);
}

heroes::~heroes()
{
    //dtor
}

virtual void heroes::attack(personnages cible, heroes.weapon)
{
    cible.takeDamage(personnages.getStrength + weapon.baseDamage);
}

void changeWeapons(newid) {
    personnages.weapon(newid);
}
