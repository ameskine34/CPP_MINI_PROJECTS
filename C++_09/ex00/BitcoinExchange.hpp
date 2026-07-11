#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
//for the stringstream that treat the line as stream that we can manipultate

typedef struct Data
{
    std::string date;
    std::string price;
}Data;


// class BitcoinExchange
// {
//     private:
//     public:
//         BitcoinExchange();
//         BitcoinExchange& operator=(const BitcoinExchange& other);
//         ~BitcoinExchange();
// };

bool isValidDate(const std::string& dateStr);

#endif

//date format : R"(^(\d{4})-(\d{2})-(\d{2})$)"
//A raw string literal tells the compiler to ignore escape 
//sequences (like \n, \t, or \") ---- *^* the start of the string
//(\d{4}) capturing the group 
//  \d digit from [0-9]

//std::smatch matches; string matches
