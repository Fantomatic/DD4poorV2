#ifndef MOB_H
#define MOB_H


class mob : public personnages
{
    public:
        mob(unsigned int life, unsigned int strength, string name, string description, int level);
        ~mob();
    protected:
    private:
};

#endif // MOB_H
