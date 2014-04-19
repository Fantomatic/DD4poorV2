#ifndef WEAPON_H
#define WEAPON_H


class weapon
{
    public:
        /** Default constructor */
        weapon() = default;
        weapon(int id);
        /** Default destructor */
        ~weapon();

        unsigned int GetbaseDamage() { return baseDamage; }
        void SetbaseDamage(unsigned int val) { baseDamage = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string Getdescription() { return description; }
        void Setdescription(string val) { description = val; }
    protected:
    private:
        unsigned int baseDamage;
        string name;
        string description;
};

#endif // WEAPON_H
