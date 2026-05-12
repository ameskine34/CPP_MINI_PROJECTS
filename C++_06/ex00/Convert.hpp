#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class ScalarConverter{
    public:
        ScalarConverter();
        static void convert(const std::string s);
        ~ScalarConverter();
};

#endif