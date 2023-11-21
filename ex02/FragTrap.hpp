#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string Name);
        FragTrap(FragTrap &fragTrap );
        FragTrap &operator=(const FragTrap &clapTrap);
        void attack(const std::string& target);
        void highFivesGuys(void);
};
#endif