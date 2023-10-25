#include "FragTrap.hpp"

int main()
{
    // ClapTrap    obj1("BOBO");
    // ScavTrap    obj2("MOMO");
    FragTrap    obj3("Marouane");
    std::string target =  "target";

    obj3.attack(target);
    obj3.beRepaired(5);
    obj3.highFiveGuys();
    std::cout << "------------------------" << std::endl;
    std::cout << "Hit Points: ";
    obj3.get_HitPoints();
    std::cout << "Energy Points: ";
    obj3.get_EnergyPoints();
    std::cout << "Attack Damage: ";
    obj3.get_AttackPoints();
    std::cout << "------------------------" << std::endl;
}