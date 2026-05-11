#include <iostream>

class Speed{
    private:
        int speed;
    public:
        Speed(){
            speed =0;
            std::cout << "object created" << std::endl;
        }
        void set_speed(const int &s){
            speed = s;
            std::cout << s << std::endl;
        }
        ~Speed(){
            std::cout << "object destroyed" << std::endl;
        }
};

int main()
{
    Speed car1;

    car1.set_speed(10);
}