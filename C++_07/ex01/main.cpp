#include "iter.hpp"

int main()
{
    std::string s[] = {"amine", "hicham", "oussama"};
    iter(s, 3, function<std::string>);
    int b[] = {100, 2, 822};
    iter(b, 3, function<int>);
}