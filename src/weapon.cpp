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
        name="�p�e rouill�e";
        description="Les d�butants en ont tous une.";
        break;}
    case 2:{
        baseDamage=4;
        name="�p�e de fer";
        description="Essentiel pour les barbecues.";
        break;}
    }
}

weapon::~weapon()
{
    //dtor
}
