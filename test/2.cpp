#include <iostream>

// int main()
// {
    // const double a = 1000.0;
    // std::cout << static_cast<char>(a) << std::endl;
// }

#include <iostream>

void modifyValue(const int* ptr)
{
    // Remove constness
    int* writablePtr = const_cast<int*>(ptr);

    // Attempt to modify the value
    *writablePtr = 42;
}

int main()
{
    int x = 10;

    std::cout << "Before: " << x << std::endl;

    modifyValue(&x);

    std::cout << "After: " << x << std::endl;

    return 0;
}