#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();        
        WrongCat(const WrongCat& source);
        WrongCat& operator=(const WrongCat& source);
        ~WrongCat();
        void makeSound();
};

#endif