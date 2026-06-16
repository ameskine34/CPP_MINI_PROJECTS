#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename R>
void iter(T *add, size_t lenght, R func)
{
    for (size_t i = 0; i < lenght; i++)
        func(add[i]);
}

template <typename T>
void function(T string)
{
    std::cout << "this is the function output :" << string << std::endl;
}
#endif