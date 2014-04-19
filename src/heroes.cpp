#include "personnages.h"
#include "heroes.h"
#include "weapon.h"
#include <string>

using namespace std;

heroes::heroes(unsigned int life, unsigned int strength, string name, string description) :
    personnages(unsigned int life, unsigned int strength, string name, string description)

{
    heroes.weapons = weapon(1);
}

heroes::~heroes()
{
    //dtor
}

void heroes::attack(personnages cible, weapon heroes.weapons)
{
    cible.takeDamage(personnages.getStrength + weapons.baseDamage);
}

void changeWeapons(int newid) {
    personnages.weapon(newid);
}
