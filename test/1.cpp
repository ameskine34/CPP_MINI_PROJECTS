#include <iostream>

int main()
{
    int a = 10;
    int b = 3;

    std::cout << static_cast <double> (a)/b << std::endl;
}

//(a / b)                   3             Both ints → integer 
//static_cast<double>(a)/b  3.333        a cast to double first

// static_cast is a compile-time type conversion tool.