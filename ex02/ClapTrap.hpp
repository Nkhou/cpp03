#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int EnerguPoint;
        int AttackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap &clapTrap);
        ClapTrap &operator=(const ClapTrap &clapTrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif