#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstring>

class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert(const std::string s);
};

#endif