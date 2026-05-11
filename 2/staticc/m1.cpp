#include <iostream>
#include "Am.hpp"

int Am::r = 0;

int main() {
    Am::f();
    Am::f();
    Am::f();
    std::cout << Am::r << std::endl;
    return 0;
}