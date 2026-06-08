#include <iostream>
#include <ctime>

int main()
{
    std::srand(std::time(0));
    int r = std::rand() % 3;
    std::cout << r << std::endl;
}
