#include "Convert.hpp"

ScalarConverter::ScalarConverter(){
};

ScalarConverter::ScalarConverter(const ScalarConverter& other){
    (void)other;
};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
    (void)other;
    return (*this);
};

ScalarConverter::~ScalarConverter(){
};

void ScalarConverter::convert(const std::string s){
    const char *n = s.c_str();
    int i = std::strlen(n);
    if (i > 0)
    {
        std::cout << "char : " << std::endl;
        for (int j = 0; n[j]; j++)
        {
            if(std::isdigit(n[j]) && !std::isprint(n[j]))
            {
                std::cout << "amine" << std::endl;
                std::cout << "Non-Printable Char found" << std::endl;
            }
        }
    }
};