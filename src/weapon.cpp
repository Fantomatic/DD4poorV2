#include "weapon.h"
#include "variable.h"

weapon::weapon(int id )
{
    switch(id){
    case 1:{
        weapon.baseDamage=2;
        weapon.name="�p�e rouill�e";
        weapon.description="Les d�butants en ont tous une."
        break;}
    case 2:{
        weapon.baseDamage=4;
        weapon.name="�p�e de fer";
        weapon.description="Essentiel pour les barbecues."
        break;}
}

weapon::~weapon()
{
    //dtor
}
