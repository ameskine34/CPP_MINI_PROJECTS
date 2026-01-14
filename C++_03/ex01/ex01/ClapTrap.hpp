#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoints; //health
        unsigned int energyPoints; //staminna 
        unsigned int attackDamage; //damage

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& source);
        ClapTrap& operator=(const ClapTrap& source);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif