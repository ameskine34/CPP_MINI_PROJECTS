#include "BitcoinExchange.hpp"

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