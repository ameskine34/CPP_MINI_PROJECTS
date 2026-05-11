#include <iostream>

void print(const int &n) //If a reference is non-const,the case in this
{
    std::cout << n << std::endl;
}
int main()
{
    print(10);//the compiler assumes you want to change the variable.
}
//It creates an anonymous temporary variable: int _temp = 10;
//It binds(link) your reference n to that _temp variable.


//if the reference is const, you've promised not to change it
//so the compiler allows you to point to temporary values or literals

// void print(const int &n) 
// {
//     std::cout << n << std::endl;
// }

// int main()
// {
//     print(10); //cuz 10 is a temporary value not a var with a stable memory location 
// }

//The "Why": Performance vs. Protection
//C++,you are almost always balancing two things: Speed and Safety
//""passing by value""" protect the original , but for speed 
//its slow
//passing 1GO by value the computer has to copy 1GO of data in a
//new slot of memory which is too slow;

//"passing by reference" (int &n) SPeed : fast cuz it passes the main
//address now matter how big the object is.
// safety : dangerous you can modify the original data.


//the solution is Const reference :
//speed : fast same address 
//safety : perfect (const) --> read-only 


//There is one more "magical" thing that const references can 
//do that regular references cannot: They can bind to temporary 
//values (it keep the value out of scoop ) Lifetime Extension.
//The "read-only" part is enforced by the Compiler, not the hardware.
//so it stay in the stack not read-only memo.
//but it didn t work recurcively like accessing to an object to use
// something or a data 


// void print(int& n)
// {
//     std::cout << n << std::endl;
// }
// int main()
// {
//     int a = 10;
//     print(a);
// }