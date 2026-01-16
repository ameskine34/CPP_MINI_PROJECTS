/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:12:41 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 15:50:55 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal is born!" << std::endl;
    type = "animal";
}

Animal::Animal(const Animal& source)
{
    std::cout << "animal copy constractor!" << std::endl;
    *this = source;
}

Animal& Animal::operator=(const Animal& source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
    {
        type = source.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "destractor called" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}