#include <iostream>

// why it didn't work cuz 10 is a temporary value and non-constant
// so the compiler assume that you will change the value 

// void print(int &s)
// {
    // std::cout << s << std::endl;
// }
// int main()
// {
    // print(10);
// }

//its all about if (it is lvalue or rvalue)

// this is one is working cuz of the const  
// void print(const int &s)
// {
//     std::cout << s << std::endl;
// }
// int main()
// {
//     print(10);
// }