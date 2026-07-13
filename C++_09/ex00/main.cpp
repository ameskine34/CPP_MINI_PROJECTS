#include "BitcoinExchange.hpp"

bool isValidDate(const std::string& s)
{
    if (s.length() != 10)
        return false;

    if (s[4] != '-' || s[7] != '-')
        return false;

    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(s[i]))
            return false;
    }
    int year = std::atoi(s.substr(0,4).c_str());
    int month = std::atoi(s.substr(5,2).c_str());
    int day = std::atoi(s.substr(8,2).c_str());
    if (month < 1 || month > 12)
        return (false);
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2)
    {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeap) {
            daysInMonth[1] = 29;
        }
    }
    if (day < 1 || day > daysInMonth[month - 1])
        return (false);
    return (true);
}

bool isValid(const std::string& s)
{
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == '.' && isdigit(s[i + 1]))
            continue;
        if (!isdigit(s[i]))
            return false;
    }
    float price = std::atoi(s.c_str());
    if (price < 0)
        return (false);
    return (true);
}

int data_baseParse()
{
    std::vector<Data> data_list;
    std::ifstream file("data.csv");
    if (!file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    std::string line;
    if (std::getline(file, line)){
    }//line skipped once line is read the cursur move to the next line
    while (std::getline(file, line))
    {
        Data dd;
        std::stringstream ss(line);
        std::string extract;
        if (std::getline(ss, extract, ',')) dd.date = extract;
        if (std::getline(ss, extract, '\n')) dd.price_num = extract;
        if (!isValidDate(dd.date) || !isValid(dd.price_num))
        {
            std::cout << "Error: invalid date format." << std::endl;
            return (1);
        }
        data_list.push_back(dd);
    }        
    file.close();
    return (0);
}

int main(int ac, char **av)
{
    std::vector<Data> input_list;
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    if (!data_baseParse())
    {
        std::string line;
        std::ifstream file(av[1]);
        if (!file.is_open())
        {
            std::cout << "Error: could not open file." << std::endl;
            return (1);
        }
        if (std::getline(file, line)){
        }
        while (std::getline(file, line))
        {
            Data input;
            std::stringstream ss(line);
            std::string extract;
            if (std::getline(ss, extract, '|')) input.date = extract;
            if (std::getline(ss, extract, '\n')) input.price_num = extract;
            input_list.push_back(input);
        }
            file.close();
    }
    return (0);
}

//file.csv (Comma-Separated Values)
//std::stringstream why using it cuz getline 1st parameter should be
//input stream
//In the Gregorian calendar, a year is a leap year if:
//It is divisible by 4, except
//Years divisible by 100 are not leap years, except
//Years divisible by 400 are leap years.