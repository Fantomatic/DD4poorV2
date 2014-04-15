#ifndef MOB_H
#define MOB_H

#include <personnages.h>


class mob : public personnages
{
    public:
        mob(unsigned int life, unsigned int strength, string name, string description, int level);
        ~mob();
        mob(const mob& other);
    protected:
    private:
};

#endif // MOB_H
