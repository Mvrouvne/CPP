#include "FragTrap.hpp"

int main()
{
    ClapTrap    obj1("BOBO");
    ScavTrap    obj2("MOMO");
    FragTrap    obj3("LOLO");
    std::string target =  "target";

    obj1.attack(target);
    obj1.beRepaired(5);
    obj2.guardGate();
    obj3.highFiveGuys();
    std::cout << "------------------------" << std::endl;
    std::cout << "Hit Points: ";
    obj1.get_HitPoints();
    std::cout << "Energy Points: ";
    obj1.get_EnergyPoints();
    std::cout << "Attack Damage: ";
    obj1.get_AttackPoints();
    std::cout << "------------------------" << std::endl;
}