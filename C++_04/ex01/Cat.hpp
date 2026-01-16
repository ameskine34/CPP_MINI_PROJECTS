#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();        
        Cat(const Cat& source);
        Cat& operator=(const Cat& source);
        ~Cat();
        void makeSound();
};

#endif