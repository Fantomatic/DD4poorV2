#ifndef HEROES_H
#define HEROES_H
#include "weapon.h"
class heroes : public personnages
{
    public:
        /** Default constructor */
        heroes(unsigned int life, unsigned int strength, string name, string description);
        /** Default destructor */
        ~heroes();

        /**Getter et setter du héros*/
        weapon Getweapon() { return weapons; }
        void Setweapon(weapon val) { weapons = val; }
        void changeWeapons(int newid);
        virtual void attack (personnages cible, weapon heroes.weapons);
    protected:
        weapon weapons;
};

#endif // HEROES_H
