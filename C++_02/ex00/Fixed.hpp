#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
    private:
        int fixed_point;
        static const int _fractional;
    public:
        Fixed();
        Fixed(const Fixed &source);
        Fixed &operator=(const Fixed &source);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif