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
            this->n = other.n;
            if (this->n > 0)
            {
                this->add = new T[this->n];
                for (unsigned int i = 0; i < this->n; i++)
                {
                    this->add[i] = other.add[i];
                }
            }
            else
                this->add = NULL;
        }
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                if (this->add)
                    delete[] this->add;
                if (this->n > 0)
                {
                    this->n = other.n;
                    this->add = new T[this->n];
                    for (unsigned int i = 0; i < this->n; i++)
                    {
                        this->add[i] = other.add[i];
                    }
                }
                else
                    this->add = NULL;
            }
            return (*this);
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
        T& operator[](unsigned int index)
        {
            if (index < 0 || index >= n)
                throw ();
            return (this->add[index]);
        }
        ~Array(){
            if (this->add)
                delete[] this->add;
        }
        int size(void)
        {
            return (n);
        }
};

#endif