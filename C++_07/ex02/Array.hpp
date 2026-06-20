#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
    private:
        T* add;
        unsigned int n;
    public:
        Array(){
            add = NULL;
            n = 0;
        }
        Array(unsigned int n){
            add = new T[n]();
            this->n = n;
        }
        Array(const Array& other) : add(other.add), n(other.n)
        Array& operator=(const Array& other);
        ~Array(){
            if (this->add)
                delete[] this->add;
        }
};

#endif