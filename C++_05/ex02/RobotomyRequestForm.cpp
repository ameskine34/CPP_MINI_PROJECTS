#include "RobotomyRequestForm.hpp"
#include <cstdlib> //contain rand function
#include <ctime> //to access time function

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequest", 0, 72, 45), target(target)
{

}

void RobotomyRequestForm::executeAction() const 
{
    std::cout << "tzzzzzzzzzzzzzz..." << std::endl;

    static bool seeded = false;
    if (!seeded) {
        std::srand(std::time(NULL)); //start from the generated num from time(NULL)
        seeded = true;
    }//the internel state become internal_state = 1714980000;

    if (std::rand() % 2) //random gen
        std::cout << target << " robotomized successfully\n";
    else
        std::cout << "Robotomy failed\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

// int main()
// {
//     int a = time(0); //This value represents current time in seconds
//     srand(a);//Start your internal sequence from this value: a
//     std::cout << rand() << std::endl;
//     std::cout << rand() << std::endl;
//     std::cout << rand() << std::endl;
//     std::cout << rand() << std::endl;
//     return (0);
// }