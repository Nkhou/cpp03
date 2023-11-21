#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constracter ScavTrap called"<< std::endl;
    this->HitPoints = 100;
    this->EnerguPoint = 50;
    this->AttackDamage = 20;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Deconstracter ScavTrap called"<< std::endl;
}
ScavTrap::ScavTrap(ScavTrap &scavTrap)
{
    std::cout << "Copy constracter ScavTrap called"<< std::endl;
    *this = scavTrap;
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Constracter paramitrize ScavTrap called"<< std::endl;
    this->Name = name;
    this->HitPoints = 100;
    this->EnerguPoint = 50;
    this->AttackDamage = 20;
}
ScavTrap &ScavTrap::operator=(const  ScavTrap &scavTrap)
{
    this->HitPoints = scavTrap.HitPoints;
    this->EnerguPoint = scavTrap.EnerguPoint;
    this->AttackDamage = scavTrap.AttackDamage;
    return (*this);
}
void ScavTrap::attack(const std::string& target)
{
    if (this->HitPoints > 0 && this->EnerguPoint > 0)
    {
        this->EnerguPoint -= 1;
        std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    }
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << "is now in Gate keeper mode." << std::endl;
}