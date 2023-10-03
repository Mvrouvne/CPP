#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        void    announce(void);
        Zombie(std::string name);
        Zombie(){};
        ~Zombie();
        void get_name(std::string name)
        {
            this->name = name;
        }
};

Zombie*	zombieHorde(int N, std::string name);

#endif