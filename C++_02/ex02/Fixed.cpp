/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 00:08:46 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/12 17:34:36 by ameskine         ###   ########.fr       */
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

// Comparison
bool Fixed::operator>(const Fixed &source) const  
{
    return fixed_point > source.fixed_point; 
}
bool Fixed::operator<(const Fixed &source) const  
{ 
    return fixed_point < source.fixed_point; 
}
bool Fixed::operator>=(const Fixed &source) const 
{ 
    return fixed_point >= source.fixed_point; 
}
bool Fixed::operator<=(const Fixed &source) const 
{ 
    return fixed_point <= source.fixed_point; 
}
bool Fixed::operator==(const Fixed &source) const 
{ 
    return fixed_point == source.fixed_point; 
}
bool Fixed::operator!=(const Fixed &source) const 
{ 
    return fixed_point != source.fixed_point; 
}

// Arithmetic (Simplest way: convert to float, do math, convert back)
Fixed Fixed::operator+(const Fixed &other) const 
{
    Fixed result;
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const 
{
    Fixed result;
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const 
{
    // We convert to float to handle the math, then use the 
    // result to initialize a named object.
    float val = this->toFloat() * other.toFloat();
    Fixed result(val);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const 
{
    float val = this->toFloat() / other.toFloat();
    Fixed result(val);
    return result;
}

// Increment / Decrement
Fixed& Fixed::operator++() 
{
    this->fixed_point++;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed temp(*this);    //Create a copy of the current state
    this->fixed_point++;  //Increment the actual object
    return temp;          //Return the old state
}

Fixed& Fixed::operator--() 
{
    this->fixed_point--;
    return *this;
}

Fixed Fixed::operator--(int) 
{
    Fixed temp(*this);
    this->fixed_point--;
    return temp;
}

// Static Min / Max
Fixed& Fixed::min(Fixed &a, Fixed &b) 
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) 
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) 
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) 
{
    return (a > b) ? a : b;
}

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}
