#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    BitcoinExchange exchange;

    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    if (!data_baseParse(exchange))
    {
        if (user_input(av[1], exchange))
        {
            std::cout << "Error: could not open file." << std::endl;
            return (1);
        }
    }
    return (0);
}