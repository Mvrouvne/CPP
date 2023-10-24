#include "ScarvTrap.hpp"

int main()
{
    ClapTrap    obj2("Clap");
    ScavTrap    obj("Marouane");
    std::string target =  "Walid";

    obj.attack(target);
    obj.attack(target);
    obj.beRepaired(5);
    obj.guardGate();
    obj2.attack(target);
    // obj.takeDamage(5);
    // obj.takeDamage(5);
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