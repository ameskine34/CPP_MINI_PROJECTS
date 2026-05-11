#include <iostream>

class Am{
    private:
        int x; 
    public:
        Am() : x(888){
        };
        void updateX(int x)
        {
            this->x = x;
        }
        int getX() const{
            return (this->x);
        }
};

int main()
{
    Am ll;

    ll.updateX(1233335);
    std::cout << ll.getX() << std::endl;
}