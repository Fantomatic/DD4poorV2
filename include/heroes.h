#ifndef HEROES_H
#define HEROES_H
#include <personnages.h>


class heroes : public personnages
{
    public:
        /** Default constructor */
        heroes(unsigned int life, unsigned int strength, string name, string description);
        /** Default destructor */
        ~heroes();

        /**Getter et setter du héros*/
        weapon Getweapon() { return weapon; }
        void Setweapon(weapon val) { weapon = val; }
        string Getarchetype() { return archetype; }
        void Setarchetype(string val) { archetype = val; }
        void changeWeapons(id);
    protected:
        weapon weapon;
};

#endif // HEROES_H
