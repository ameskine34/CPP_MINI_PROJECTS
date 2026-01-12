/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 13:37:00 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/12 11:54:55 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

Fixed& Fixed::operator=(const Fixed& source) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source) {
        this->fixed_point = source.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;   
}
float Fixed::toFloat(void) const
{
    return ((float)fixed_point / 256);
}

int Fixed::toInt(void) const
{
    return (fixed_point >> _fractional);
}

Fixed::Fixed(const int n)
{
    this->fixed_point = n * 256;
}

Fixed::Fixed(const float fixed_point)
{
    this->fixed_point = roundf(fixed_point * 256);
}

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

