/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:12:45 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 14:48:37 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat is born!" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat& source) : Animal(source)
{
    this->_brain = new Brain();
    *this->_brain = *source._brain;
    std::cout << "Cat Deep copy constractor!" << std::endl;
}

Cat& Cat::operator=(const Cat& source)
{
    std::cout << "Deep cat copy assignment operator called" << std::endl;
    if (this != &source)
    {
        delete this->_brain;
        this->_brain = new Brain();
        *this->_brain = *source._brain;
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destractor called!" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Cat sound heard!" << std::endl;
}