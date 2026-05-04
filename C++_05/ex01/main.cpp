#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Bureaucrat p("amine", 100);
        p.decrement_grade();
        Form k("dhg",0,20,12);
        std::cout << p << std::endl;
        k.beSigned(p);
        std::cout << k << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}