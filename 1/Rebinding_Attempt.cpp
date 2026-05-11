#include <iostream>

int main()
{
    int x = 5;
    int y = 10;

    int &ref = x;
    ref = y; // in this line what happend is (x = y) not the ref
    std::cout << ref << std::endl;
    std::cout << x << std::endl;
}