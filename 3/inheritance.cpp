#include <iostream>

class Device{
    public:
        void turnOn()
        {      
            std::cout << "the device is on" << std::endl;
        }
};

class laptop : private Device
{
    private:
        std::string name;
    public:
        laptop(){};
        laptop(std::string name) : name(name){}
};

int main()
{
    laptop x("dell");

    x.turnOn();
}

//inheritance :embeds(integre) an instance of the class X inside the
//class Y;
