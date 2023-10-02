#include "Zombie.hpp"


int main()
{
    Zombie* obj = newZombie("hello");

    obj->announce();
    
    delete obj;
    // randomChump("Rooom");
    // Zombie  zombie_obj("Marouane");

    // zombie_obj.announce();
}