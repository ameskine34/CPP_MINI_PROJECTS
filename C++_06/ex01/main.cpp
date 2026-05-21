#include "Serializer.hpp"

int main()
{
    Data *ptr = new Data;
    ptr->a = 20;
    ptr->str = "amine";

    uintptr_t raw = Serializer::serialize(ptr);     
    Data *ptr2    = Serializer::deserialize(raw);   

    // verify they point to the same address
    std::cout << "original  : " << ptr  << std::endl;
    std::cout << "serialized: " << raw  << std::endl;
    std::cout << "deserialized: " << ptr2 << std::endl;
    if (ptr == ptr2)
    {
        std::cout << "matches" << std::endl;
    }
    else
        std::cout << "didn't matche" << std::endl;
    delete ptr;
}