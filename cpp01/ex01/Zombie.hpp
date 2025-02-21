#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <stdlib.h>

class   Zombie
{
    private:
        std::string name;
    public:
        void    announce(void);
        Zombie(std::string name);
        Zombie(){};
        ~Zombie();
        void get_name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif