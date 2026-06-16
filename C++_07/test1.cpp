#include <iostream>

template <typename T>

const T& add(const T &a, const T &b)
{
    return (a + b);
}


int main()
{
    std::cout << add(5, 7) << std::endl;
}