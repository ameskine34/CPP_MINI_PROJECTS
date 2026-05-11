#include <iostream>

class Am{
    private:
        const int data;
        int trust;
        int *p;
    public:
        Am(int i) : data(i), trust(0), p(new int(i)){
        }
        Am (const Am &other) : data(other.data), trust(other.trust), p(new int(*other.p))//same as the reference to
        {}
        Am& operator=(const Am &other)
        { 
            if (this != &other)
            {
                delete p;
                this->trust = other.trust;
                this->p = new int(*other.p);
            }
            return (*this);
        }
        void display()
        {
            std::cout << data << std::endl;
            std::cout << trust << std::endl;            
        }
        void set_value(int trust)
        {
            this->trust = trust;
        }
        ~Am(){
            delete p;
        }
};

int main()
{
    Am b(6);

    Am c(b); //same as Am c = b; to initialize a new object 
    // Am c = b;
    c.set_value(100000);
    b.display();
    std::cout << "---------------------- "<< std::endl;
    c.display();
}