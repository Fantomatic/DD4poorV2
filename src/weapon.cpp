#include "weapon.h"
#include <string>

using namespace std;

weapon::weapon()
{
    baseDamage=0;
    name={};
    description={};
}
weapon::weapon(int id )
{
    switch(id){
    case 1:{
        baseDamage=2;
        name="épée rouillée";
        description="Les débutants en ont tous une.";
        break;}
    case 2:{
        baseDamage=4;
        name="épée de fer";
        description="Essentiel pour les barbecues.";
        break;}
    }
}

weapon::~weapon()
{
    //dtor
}
