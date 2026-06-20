#include "Array.hpp"

int main()
{
    int s[4] = {12222, 6646, 4545385 ,64534};
    Array <int> d(4);
    d.adding(s);
    d.print();
    Array <int> Ss(d);
    Ss.print();   
    std::cout << "**********************" << std::endl;
    Array <int> h(2);
    h = d;
    h.print();
}