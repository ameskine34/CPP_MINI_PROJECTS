#include <iostream>

class Goals{
    private:
        mutable int Gnumbers;
        int Play;
    public:
        Goals(){
            Gnumbers = 0;
            Play = 0;
        }
        int check() const 
        {
            Gnumbers++;
            return (Gnumbers);
        }
        int players() 
        {
            Play++;
            Gnumbers++;
            std::cout << Play << std::endl;
            std::cout << Gnumbers << std::endl;
            return (Play);
        }
};

int main()
{
    Goals amine;

    amine.check();
    amine.players();
}

// if a member in the class is const then the compiler uses the 
// pointer (const Goals *const this)
// (a constant pointer to a constant object) so every member in that
// object is treated constant

// while if the member function doesn t contain the const 
// the compiler uses the pointer (Goals *const this)
// (a constant pointer to a mutable object)

// if you do have a const member the give access to a private member
// use mutable and initialize it using constractor or initialized list 