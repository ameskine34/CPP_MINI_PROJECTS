#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v = {10,3,45,645,3};
    for (vector<int>::iterator it = v.begin(); it!=v.end(); it++) 
        std::cout << *it << std::endl;
}