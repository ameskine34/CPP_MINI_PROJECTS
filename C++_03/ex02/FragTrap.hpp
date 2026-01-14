#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& source);
        FragTrap& operator=(const FragTrap& source);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif