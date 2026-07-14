#include "BitcoinExchange.hpp"

bool isValidDate(const std::string& s, int i)
{
    if (i == DATA_CSV && s.length() != 10)
        return (false);
    if (i == INPUT_TXT && s.length() != 10)
        return (false);
    if (s[4] != '-' || s[7] != '-')
        return (false);

    for (int j = 0; j < 10; j++)
    {
        if (j == 4 || j == 7)
            continue;
        if (!std::isdigit(s[j]))
            return (false);
    }

    int year = std::atoi(s.substr(0, 4).c_str());
    int month = std::atoi(s.substr(5, 2).c_str());
    int day = std::atoi(s.substr(8, 2).c_str());
    if (month < 1 || month > 12)
        return (false);

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2)
    {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeap)
            daysInMonth[1] = 29;
    }
    if (day < 1 || day > daysInMonth[month - 1])
        return (false);
    return (true);
}

bool isValid(const std::string& s)
{
    std::string value = s;
    for (size_t i = 0; i < value.size(); i++)
    {
        if (std::isspace(value[i]))
            continue;
        if (value[i] == '+' || value[i] == '-')
        {
            if (i != 0)
                return (false);
            continue;
        }
        if (value[i] == '.')
        {
            if (i + 1 >= value.size() || !std::isdigit((value[i + 1])))
                return (false);
            continue;
        }
        if (!std::isdigit(value[i]))
            return (false);
    }
    char *end = NULL;
    errno = 0;
    double price = std::strtod(value.c_str(), &end);
    if (errno == ERANGE || end == value.c_str() || price != price)
        return (false);
    while (*end != '\0')
    {
        if (!std::isspace(*end))
            return (false);
        ++end;
    }
    if (price < 0)
        return (false);
    return (true);
}

int data_baseParse(BitcoinExchange& exchange)
{
    std::ifstream file("data.csv");
    if (!file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    std::string line;
    if (!std::getline(file, line))
        return (1);
    while (std::getline(file, line))
    {
        Data dd;
        std::stringstream ss(line);
        std::string extract;

        if (std::getline(ss, extract, ','))
            dd.date = extract;
        if (std::getline(ss, extract, '\n'))
            dd.price_num = extract;

        std::string date = dd.date;
        std::string price = dd.price_num;
        while (!date.empty() && std::isspace(date[0]))
            date.erase(0, 1);
        while (!date.empty() && std::isspace(date[date.size() - 1]))
            date.erase(date.size() - 1);
        while (!price.empty() && std::isspace(price[0]))
            price.erase(0, 1);
        while (!price.empty() && std::isspace(price[price.size() - 1]))
            price.erase(price.size() - 1);

        if (!isValidDate(date, DATA_CSV) || !isValid(price))
        {
            std::cout << "Error: invalid date format." << std::endl;
            return (1);
        }
        Data data;
        data.date = date;
        data.price_num = price;
        exchange.addData(data);
    }
    file.close();
    return (0);
}

int user_input(char *av, BitcoinExchange& exchange)
{
    std::ifstream file(av);
    if (!file.is_open())
        return (1);

    std::string line;
    if (!std::getline(file, line))
        return (1);
    while (std::getline(file, line))
    {
        Data input;
        std::stringstream ss(line);
        std::string extract;

        if (std::getline(ss, extract, '|'))
            input.date = extract;
        if (std::getline(ss, extract, '\n'))
            input.price_num = extract;

        std::string date = input.date;
        std::string price = input.price_num;
        while (!date.empty() && std::isspace(date[0]))
            date.erase(0, 1);
        while (!date.empty() && std::isspace(date[date.size() - 1]))
            date.erase(date.size() - 1);
        while (!price.empty() && std::isspace(price[0]))
            price.erase(0, 1);
        while (!price.empty() && std::isspace(price[price.size() - 1]))
            price.erase(price.size() - 1);

        if (!isValidDate(date, INPUT_TXT))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        if (!isValid(price))
        {
            if (!price.empty() && price[0] == '-')
                std::cout << "Error: not a positive number." << std::endl;
            else if (std::strtod(price.c_str(), NULL) > 1000)
                std::cout << "Error: too large a number." << std::endl;
            else
                std::cout << "Error: bad input => " << price << std::endl;
            continue;
        }

        double value = std::atof(price.c_str());
        if (value > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        size_t index = 0;
        while (index < exchange.size() && exchange.getData(index).date <= date)
            ++index;
        if (index == 0)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        --index;

        std::cout << date << " => " << value << " = " << (value * std::atof(exchange.getData(index).price_num.c_str())) << std::endl;
    }
    file.close();
    return (0);
}

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