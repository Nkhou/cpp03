#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constracter FragTrap called"<< std::endl;
    this->HitPoints = 100;
    this->EnerguPoint = 50;
    this->AttackDamage = 20;
}
FragTrap::~FragTrap()
{
    std::cout << "Deconstracter FragTrap called"<< std::endl;
}
FragTrap::FragTrap(FragTrap &FragTrap)
{
    std::cout << "Copy constracter FragTrap called"<< std::endl;
    *this = FragTrap;
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "Constracter paramitrize FragTrap called"<< std::endl;
    this->Name = name;
    this->HitPoints = 100;
    this->EnerguPoint = 50;
    this->AttackDamage = 20;
}
FragTrap &FragTrap::operator=(const  FragTrap &FragTrap)
{
    this->HitPoints = FragTrap.HitPoints;
    this->EnerguPoint = FragTrap.EnerguPoint;
    this->AttackDamage = FragTrap.AttackDamage;
    return (*this);
}
void FragTrap::attack(const std::string& target)
{
    if (this->HitPoints > 0 && this->EnerguPoint > 0)
    {
        this->EnerguPoint -= 1;
        std::cout << "FragTrap " << this->Name << " attack " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    }
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap  high fives Guys!"<< std::endl;
}