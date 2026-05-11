#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat mid("Mid", 40);
        Bureaucrat low("Low", 150);

        //------------------------------------
        std::cout << "\n--- SHRUBBERY ---\n";
        ShrubberyCreationForm shrub("home");

        boss.signForm(shrub);
        boss.executeForm(shrub);

        //-----------------------------------
        std::cout << "\n--- ROBOTOMY ---\n";
        RobotomyRequestForm robot("Bender");

        mid.signForm(robot);
        mid.executeForm(robot);
        boss.executeForm(robot); 

        //-------------------------------------
        std::cout << "\n--- PRESIDENTIAL PARDON ---\n";
        PresidentialPardonForm pardon("Arthur Dent");

        boss.signForm(pardon);
        boss.executeForm(pardon);

        std::cout << "\n--- FAILURE TEST ---\n";
        low.signForm(pardon);     
        low.executeForm(pardon);  

    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
