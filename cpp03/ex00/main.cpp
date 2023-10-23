#include "ClapTrap.hpp"

int main()
{
    ClapTrap    obj("Marouane");
    std::string target =  "Walid";

    // protect - !!!!!!!!!!!!!!!!

    obj.attack(target);
    obj.attack(target);
    obj.beRepaired(5);
    obj.takeDamage(5);
    obj.takeDamage(5);
    obj.takeDamage(5);
    std::cout << "------------------------" << std::endl;
    std::cout << "Hit Points: ";
    obj.get_HitPoints();
    std::cout << "Energy Points: ";
    obj.get_EnergyPoints();
    std::cout << "Attack Points: ";
    obj.get_AttackPoints();
    std::cout << "------------------------" << std::endl;
}
