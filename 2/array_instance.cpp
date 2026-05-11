#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(){
            std::cout << "constructor created" << std::endl;
        }
        void set_name(std::string &n)
        {
            name = n;
        }
        void display()
        {
            std::cout << name << std::endl;
        }
        ~Zombie(){
            std::cout << "dead" << std::endl;
        }
};

int main()
{
    Zombie *zombies = new Zombie[5];
    std::string s = "amine";
    for (int i = 0; i < 5; i++)
    {
        zombies[i].set_name(s);
        zombies[i].display();
    }
    delete[] zombies;
}