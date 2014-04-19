#include "personnages.h"
#include "mob.h"
#include <string>

using namespace std;

mob::mob(unsigned int life, unsigned int strength, string name, string description, int level):
    personnages(unsigned int life, unsigned int strength, string name, string description, int level)
{

}

mob::~mob()
{
    //dtor
}

mob::mob(const mob& other)
{
    //copy ctor
}
