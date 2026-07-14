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
        std::vector<Data>::size_type size();
        const Data& getData(std::vector<Data>::size_type index);
        ~BitcoinExchange();
};

bool isValidDate(const std::string& s, int i);
bool isValid(const std::string& s);
int data_baseParse(BitcoinExchange& exchange);
int user_input(char *av, BitcoinExchange& exchange);


#endif