#ifndef PERSONNAGES_H
#define PERSONNAGES_H
#include <string>
using namespace std;

class personnages
{
    public:
        /** Default constructor */
        personnages(unsigned int life, unsigned int strength, string name, string description);
        personnages(unsigned int life, unsigned int strength, string name, string descriptionn, int level);
        /** Default destructor */
        ~personnages();
        /** Copy constructor
         *  \param other Object to copy from
         */
        personnages(const personnages& other);

        /** Getter et setter de personnages */
        unsigned int Getlife() { return life; }
        void Setlife(unsigned int val) { life = val; }
        unsigned int Getstrength() { return strength; }
        void Setstrength(unsigned int val) { strength = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string Getdescription() { return description; }
        void Setdescription(string val) { description = val; }
        int Getlevel() { return level; }
        void Setlevel(int val) { level = val; }


        virtual void attack(personnages cible);
        void takeDamage(int damage);
        void checkDeath();

    protected:
        unsigned int life;
        unsigned int strength;
        string name;
        string description;
        int level;
};

#endif // PERSONNAGES_H
