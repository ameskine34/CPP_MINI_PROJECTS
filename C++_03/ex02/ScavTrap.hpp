#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& source);
        ScavTrap& operator=(const ScavTrap& source);
        ~ScavTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
};

#endif


