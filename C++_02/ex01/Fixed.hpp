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
};
std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif