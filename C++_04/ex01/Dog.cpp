/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:12:47 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 15:33:59 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog is born!" << std::endl;
    type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog& source) : Animal(source)
{
    std::cout << "Dog copy constractor is called!" << std::endl;
}

Dog& Dog::operator=(const Dog& source)
{
    std::cout << "Deep dog copy assignment operator called" << std::endl;
    if (this != &source)
    {
        delete this->_brain;
        this->_brain = new Brain();
        *this->_brain = *source._brain;
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destractor called!" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Dog sound heard!" << std::endl;
}