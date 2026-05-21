#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "number of args is unvalid" << std::endl;
        return (0);
    }
    ScalarConverter::convert(av[1]);
}