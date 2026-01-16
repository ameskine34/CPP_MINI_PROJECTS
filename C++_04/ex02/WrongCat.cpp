/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:59:05 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 15:01:51 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat is born!" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& source) : WrongAnimal(source)
{
    std::cout << "WrongCat copy constractor!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
    {
        type = source.type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destractor called!" << std::endl;
}

void WrongCat::makeSound()
{
    std::cout << "WrongCat sound heard!" << std::endl;
}