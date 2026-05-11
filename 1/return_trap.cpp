#include <iostream>

int& return_it()
{
    int a = 8; // (a) live only in this scoop 
    return (a);
}
int main()
{
    int &b = return_it();
    std::cout << b << std::endl;
}
//the message error :reference to local variable ‘a’ returned
// so b is an alias for a ghost dangling reference
// be carful if the object existed before the function 
// started (like a global variable or a member of a class).
// otherwise the error appears