#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int>v(4, 5000);
    for (int i = 0; i < 4; i++)
        std::cout << v[i] << std::endl;
    std::cout << v.size() << std::endl;
    // v[0] = 20;
    // std::cout << v[0] << std::endl;
    // v.insert(v.end(),440);
    // std::cout << v[4] << std::endl;
    // std::cout << "*********************************" << std::endl;
    // for (int i = 0; i < 5; i++)
    //     std::cout << v[i] << std::endl;    
}