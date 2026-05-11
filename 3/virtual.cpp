#include <iostream>

class Am{
    private:
        int a;
    public:
        Am(){}
        void set_a(int i)
        {
            a = i;
        }
        virtual int get_a(){
            return (a);
        } 
        ~Am(){}
};

int main()
{
    int i = sizeof(Am);
    std::cout << i << std::endl;
}

//before adding the virtual to the sizeof is 8 after adding the virtual 
//the sizeof is upgraded to 16 (Vptr) virtual table pointer that points
//to virtual table the Vtable stores the addresses of virtual functions
//obj → vptr → vtable → function