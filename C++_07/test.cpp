#include <iostream>

template <typename T>

T my_max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    std::cout << my_max(45, 20) << std::endl;
}

//template is a blueprint not a code, template <typename T> make
//my_max a generic function that works with any data type