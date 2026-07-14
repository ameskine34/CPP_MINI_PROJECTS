#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

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

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
        this->data_list = other.data_list;
    return (*this);
}

void BitcoinExchange::addData(const Data& data)
{
    data_list.push_back(data);
}

std::vector<Data>::size_type BitcoinExchange::size() const
{
    return data_list.size();
}

const Data& BitcoinExchange::getData(std::vector<Data>::size_type index) const
{
    return data_list[index];
}

BitcoinExchange::~BitcoinExchange()
{
}

bool isValidDate(const std::string& dateStr);

#endif

//date format : R"(^(\d{4})-(\d{2})-(\d{2})$)"
//A raw string literal tells the compiler to ignore escape 
//sequences (like \n, \t, or \") ---- *^* the start of the string
//(\d{4}) capturing the group 
//  \d digit from [0-9]

//std::smatch matches; string matches
