#include "personnages.h"
#include "mob.h"
#include <string>

using namespace std;

mob::mob(unsigned int life, unsigned int strength, string name, string description, int level):
    personnages(life, strength, name, description, level)
{

}

mob::~mob()
{
    //dtor
}
