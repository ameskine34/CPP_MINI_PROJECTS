#include <iostream>

int main()
{
    int a = 8;
    int &ref = a;
    // int &ref1; not allowed
    std::cout << ref << std::endl;
    std::cout << &a << std::endl;
    std::cout << &ref << std::endl;
}
// why ?
// cuz the a reference is not a separate var with its own 
// storage it is an alias of an existing object.

// // only with this 
// {
//     int &ref;
//     ref = a; //in here the ref become a pointer with extra
//     //restrictions;
// }
// the address of the ref is the same as the add of the var