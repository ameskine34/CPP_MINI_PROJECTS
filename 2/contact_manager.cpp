#include <iostream>

class Phone{
    private:
        std::string name;
        std::string secret;
    public:
        Phone(){
            std::cout << "constructor created" << std::endl;
        }
        void display(std::string &name)
        {
            this->name = name;            
        }
        Phone &set_name(std::string &name)
        {
            this->name = name;
            return (*this);  
        }
        Phone &set_secret(std::string &secret)
        {
            this->secret = secret;
            return (*this);
        }
        ~Phone()
        {
            std::cout << "destructor" << std::endl;
        }
};

int main()
{
    Phone contact[8];
    std::string s;
    std::string sc;
    int i = 0;
    while (1)
    {
        if (i % 8 == 0)
        {
            std::cout << "kkkkkkkkkkkkkkkkkkk" << std::endl;
            i = 0;
            std::getline(std::cin, s);
            contact[i].set_name(s);
            std::getline(std::cin, sc);
            contact[i].set_secret(sc);
        }
        std::getline(std::cin, s);
        contact[i].set_name(s);
        std::getline(std::cin, sc);
        contact[i].set_secret(sc);
        i++;
    }
    return (0);
}

//this pointer is the only one that
//can track which object we are treating so it is importante to use
// this->name = name (return (*this))