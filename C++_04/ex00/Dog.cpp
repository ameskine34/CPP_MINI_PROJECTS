/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:12:47 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 10:47:43 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
    std::cout << "Dog is born!" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& source) : Animal(source)
{
    std::cout << "Dog copy constractor is called!" << std::endl;
}

Dog& Dog::operator=(const Dog& source)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &source)
    {
        type = source.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destractor called!" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Dog sound heard!" << std::endl;
}