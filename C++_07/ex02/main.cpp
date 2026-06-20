#include "Array.hpp"

int main()
{
    std::string s[4] = {"amine", "hicham", "oussama", "salma"};
    Array <std::string> d(4);
    d.adding(s);
    d.print();
}