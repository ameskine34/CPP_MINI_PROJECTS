#include <iostream>

template <typename T>

void add(const T &a, const T &b, T& res)
{
    res = (a + b);
    std::cout << res << std::endl;
}

int main()
{
    int a = 5;
    int b = 8;
    int res = 0;
    add(a, b, res);
}

//the way we write the code is to avoid the dangling issue and slicing 
//object and also copying a huge object data