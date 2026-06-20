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
        Array(const Array& other)
        {
            this->add = other.add;
            this->n = other.n;
        }
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                if (this->add)
                    delete[] this->add;
            }
            return (*this);
        }
        ~Array(){
            if (this->add)
                delete[] this->add;
        }
};

#endif