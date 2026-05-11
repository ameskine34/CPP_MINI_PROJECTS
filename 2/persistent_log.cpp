#include <iostream>

class Storage{
    private:
        std::string mess;
    public:
        void set_message(const std::string &s) //a signal to compiler to not do a copy
        {
            mess = s;
        }
        void print()
        {
            std::cout << mess << std::endl;
        }
};

int main()
{
    std::string s;
    Storage store;
    std::string s1;
    while (std::cin >> s)
    {
        if (s == "LOG")
        {
            std::cout << "enter the message :";
            std::cin.ignore(); // it flushes the buffer
            //std::cin >> s1; //std::cin >> treats the spaces as delimiters
            std::getline(std::cin, s1);
            store.set_message(s1);
            store.print();
            return (0);
        }
        else
        {
            std::cout << "EXIT" << std::endl;
            return (1);
        } 
    }
    return (0);
}

//std::cin >> treats the spaces as delimiters
// so the solution is to use getline(std::cin, s)
