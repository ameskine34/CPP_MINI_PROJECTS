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
                this->n = other.n;
                this->add = new T[this->n];
                for (unsigned int i = 0; i < this->n; i++)
                {
                    this->add[i] = other.add[i];
                }
            }
            return (*this);
        }
        ~Array(){
            if (this->add)
                delete[] this->add;
        }
        void adding(T* s)
        {
            for (unsigned int i = 0; i < this->n; i++)
            {
                this->add[i] = s[i];
            }            
        }
        void print(void)
        {
            for (unsigned int i = 0; i < this->n; i++)
            {
                std::cout << add[i] << std::endl;
            }
        }
};

#endif