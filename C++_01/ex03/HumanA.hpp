#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon &weapon;//reference attribute
        std::string name;
    public:
        HumanA(std::string name, Weapon &war);
        void attack();
        ~HumanA();
};

#endif