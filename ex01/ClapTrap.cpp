#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constracter called"<< std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Deconstracter called"<< std::endl;
}
ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
    std::cout << "Copy constracter called"<< std::endl;
    *this = clapTrap;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constracter paramitrize called"<< std::endl;
    this->Name = name;
    this->HitPoints = 10;
    this->EnerguPoint = 10;
    this->AttackDamage = 0;
}
ClapTrap &ClapTrap::operator=(const  ClapTrap &clapTrap)
{
    this->HitPoints = clapTrap.HitPoints;
    this->EnerguPoint = clapTrap.EnerguPoint;
    this->AttackDamage = clapTrap.AttackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->HitPoints > 0 && this->EnerguPoint > 0)
    {
        this->EnerguPoint -= 1;
        std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoints -= amount;
    std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnerguPoint > 0)
    {
        this->HitPoints += amount;
        std::cout << "ClapTrap " << this->Name << " be repaired " << amount << " points of damage!" << std::endl;
        this->EnerguPoint -= 1;
    }
}