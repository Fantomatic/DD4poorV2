#include "personnages.h"
#include "heroes.h"
#include "weapon.h"
#include <string>

using namespace std;

heroes::heroes(unsigned int life, unsigned int strength, string name, string description) :
        personnages(life, strength, name, description), weapons(1)

{
}

heroes::~heroes()
{
    //dtor
}

void heroes::attack(personnages& cible, weapon ws)
{
    cible.takeDamage(Getstrength() + ws.GetbaseDamage());
}

void heroes::changeWeapons(int newid){
        weapons = weapon(newid);
}
