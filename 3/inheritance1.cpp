#include <iostream>

class A{
    public:
        A(){
            std::cout << "constractor A created" << std::endl;
        }
        ~A(){
            std::cout << "destructor A called" << std::endl;
        }
};

class B : public A
{
    private:
        int x;
    public:
        B(int f) : x(f){
            std::cout << "constractor B created" << std::endl;
        }
        ~B(){
            std::cout << "destructor B called" << std::endl;
        }
};

class C : public B 
{
    public:
        C(int c): B(c){
            std::cout << "constractor C created" << std::endl;
        }
        ~C(){
            std::cout << "destructor C called" << std::endl;
        }
};

int main()
{
    C o(4);
}