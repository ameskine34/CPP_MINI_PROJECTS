#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cerrno>
#include <cctype>
#include <cstdlib>


#define DATA_CSV 0
#define INPUT_TXT 1

typedef struct Data
{
    std::string date;
    std::string price_num;
}Data;


class BitcoinExchange
{
    private:
        std::vector<Data> data_list;
    public:
        BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange& other);
        void addData(const Data& data);
        std::vector<Data>::size_type size() const;
        const Data& getData(std::vector<Data>::size_type index) const;
        ~BitcoinExchange();
};

bool isValidDate(const std::string& dateStr);

#endif