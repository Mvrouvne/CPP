#include "ScarvTrap.hpp"

int main()
{
    // ClapTrap    obj1("Clap");
    ScavTrap    obj2("Marouane");
    std::string target =  "Target";

    obj2.attack(target);
    obj2.attack(target);
    obj2.beRepaired(5);
    obj2.guardGate();
    // obj.takeDamage(5);
    // obj.takeDamage(5);
    obj2.takeDamage(5);
    std::cout << "------------------------" << std::endl;
    std::cout << "Hit Points: ";
    obj2.get_HitPoints();
    std::cout << "Energy Points: ";
    obj2.get_EnergyPoints();
    std::cout << "Attack Damage: ";
    obj2.get_AttackPoints();
    std::cout << "------------------------" << std::endl;
}