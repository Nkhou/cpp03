#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    ClapTrap najat("najat");
    najat.attack("salma");
    ScavTrap h("hello");
    h.attack("hello");
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.takeDamage(2);
    h.beRepaired(3);
    FragTrap ana("ana");
    ana.highFivesGuys();
}