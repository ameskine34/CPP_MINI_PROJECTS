#include <iostream>

void swap(int &s, int &w)
{
    int p = s;
    s = w;
    w = p;
}
int main()
{
    int a = 5;
    int b = 9;
    int &ref1 = a;
    int &ref2 = b;
    swap(ref1, ref2);
    std::cout << "this is me A: " << a << std::endl;
    std::cout << "this is me B: " << b << std::endl;
}

// in c++ the error appear at the compile time
// not even till trying to run thats why c++
// is safer in that case not like c .