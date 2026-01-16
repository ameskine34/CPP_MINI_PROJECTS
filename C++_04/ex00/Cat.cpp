/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:12:45 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 10:50:04 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat is born!" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& source) : Animal(source)
{
    std::cout << "Cat copy constractor!" << std::endl;
}

Cat& Cat::operator=(const Cat& source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
    {
        type = source.type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destractor called!" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Cat sound heard!" << std::endl;
}