#include <iostream>

namespace Alpha{
    void identity()
    {
        std::cout << "identity ::: Alpha"<< std::endl;
    }
}

namespace Beta{
    void identity()
    {
        std::cout << "identity ::: Beta"<< std::endl;
    }
}

int main()
{
    Beta::identity();
}

//When you use using namespace std; you are essentially 
//importing thousands of names into the global scope.