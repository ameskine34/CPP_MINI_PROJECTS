// #include "Array.hpp"

// int main()
// {
//     try
//     {
//         int s[4] = {12222, 6646, 4545385 ,64534};
//         Array <int> d(4);
//         d.adding(s);
//         d.print();
//         Array <int> Ss(d);
//         Ss.print();   
//         std::cout << "**********************" << std::endl;
//         Array <int> h(2);
//         h = d;
//         h.print();
//     }
//     catch(const std::exception& e)
//     {
        
//     }
// }


#include <iostream>
#include "Array.hpp"
#include <cstdlib>


#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE to test shollow copy 
    //All three objects point to the same memory.
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();//to check if modify every element by refer
                            //not a copy (cuz if you did it by copy it create a problem)
    }
    delete [] mirror;//clean up 
    return 0;
}