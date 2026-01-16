/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:59:12 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 15:51:16 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal is born!" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& source)
{
    std::cout << "WrongAnimal copy constractor!" << std::endl;
    *this = source;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
    {
        type = source.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destractor called" << std::endl;
}

void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal sound heard!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}