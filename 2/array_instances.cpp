#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(){
            std::cout << "zombie created" << std::endl;
        }
        // Zombie(std::string n) : name(n){
        //     std::cout << name << "is created" << std::endl;
        // }
        void set_name(std::string &s)
        {
            name = s;
        }
        void print()
        {
            std::cout << name << std::endl;
        }
        ~Zombie(){
            std::cout << "zombie destroyed" << std::endl;
        }
};

int main()
{
    int i = 0;
    std::string s = "amine";
    Zombie *zombies = new Zombie[5];
    while(i < 5)
    {    
        zombies[i].set_name(s);
        zombies[i].print(); 
        i++;
    }
    delete[] zombies; 
}

//from this we conclude that there is many types of the constractor 
// the important two to use are default and parameterized constractor
