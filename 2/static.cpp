#include <iostream>

class Am{
    private:
        static int r;
    public:
        Am(){
        }
        static void set()
        {
            r += 1;
        }
        static int get_r()
        {
            return (r);
        }
};

int Am::r = 123456;

int main()
{
    // int a = 1000;

    Am::set();
    std::cout << Am::get_r() << std::endl;
}

//manual Destruction isn't just about deleting things whenever you 
//want it’s about Lifetime Management. Control over "When" (The Heap)
//i want the player to stay alive for 5h 

//on The Stack : Control over "Where" for example :
//The moment main finishes destroy all the stuff It is impossible to 
//forget to delete them. The compiler handles the cleanup for you.

//static doesn't know this 

