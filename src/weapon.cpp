#include "weapon.h"
#include "variable.h"

weapon::weapon(int id )
{
    switch(id){
    case 1:{
        weapon.baseDamage=2;
        weapon.name="épée rouillée";
        weapon.description="Les débutants en ont tous une."
        break;}
    case 2:{
        weapon.baseDamage=4;
        weapon.name="épée de fer";
        weapon.description="Essentiel pour les barbecues."
        break;}
}

weapon::~weapon()
{
    //dtor
}
