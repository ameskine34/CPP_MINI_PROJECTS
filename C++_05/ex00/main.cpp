#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat p("amine", 10);
        p.decrement_grade();
        std::cout << p << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}