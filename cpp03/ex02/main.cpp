#include "FragTrap.hpp"

int main()
{
    ClapTrap    obj2("BOBO");
    ScavTrap    obj("MOMO");
    FragTrap    obj3("LOLO");
    std::string target =  "target";

    obj.attack(target);
    obj.attack(target);
    obj.beRepaired(5);
    obj.guardGate();
    obj2.attack(target);
    obj3.attack(target);
    // obj.takeDamage(5);
    // obj.takeDamage(5);
    obj.takeDamage(5);
    obj3.highFiveGuys();
    std::cout << "------------------------" << std::endl;
    
    std::cout << "Hit Points: ";
    obj.get_HitPoints();
    std::cout << "Energy Points: ";
    obj.get_EnergyPoints();
    std::cout << "Attack Points: ";
    obj.get_AttackPoints();
    std::cout << "------------------------" << std::endl;
}