#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon* weaponB;
        std::string name;
    public:
        HumanB();
        HumanB(std::string name);
        void setWeapon(Weapon &weaponb);
        void attack();
        ~HumanB();
};

#endif