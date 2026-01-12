/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 00:08:51 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/12 16:15:46 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
# include <cmath>

class Fixed{
    private:
        int fixed_point;
        static const int _fractional;
    public:
        Fixed();
        Fixed(const Fixed &source);
        Fixed &operator=(const Fixed &source);
        ~Fixed();
        Fixed(const int const_int);
        Fixed(const float floating_point);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        

        // Comparison
        bool operator>(const Fixed &source) const;
        bool operator<(const Fixed &source) const; 
        bool operator>=(const Fixed &source) const; 
        bool operator<=(const Fixed &source) const;
        bool operator==(const Fixed &source) const;
        bool operator!=(const Fixed &source) const;
        // Arithmetic 
        Fixed operator+(const Fixed &other) const; 
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        // Increment / Decrement
        Fixed& operator++();        // Pre-increment
        Fixed  operator++(int);      // Post-increment
        Fixed& operator--();        // Pre-decrement
        Fixed  operator--(int);      // Post-decrement
        // Static Min / Max
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif