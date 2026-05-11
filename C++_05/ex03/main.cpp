#include <iostream>
#include "Intern.hpp"
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

        std::cout << "\n--- SHRUBBERY ---\n";
        ShrubberyCreationForm shrub("home");

        boss.signForm(shrub);
        boss.executeForm(shrub);

        std::cout << "\n--- ROBOTOMY ---\n";
        RobotomyRequestForm robot("Bender");

        mid.signForm(robot);
        mid.executeForm(robot);

        boss.executeForm(robot); // safer success attempt

        std::cout << "\n--- PRESIDENTIAL PARDON ---\n";
        PresidentialPardonForm pardon("Arthur Dent");

        boss.signForm(pardon);
        boss.executeForm(pardon);

        std::cout << "\n--- FAILURE TEST ---\n";
        low.signForm(pardon);     // should fail
        low.executeForm(pardon);  // should fail

        std::cout << "\n--- ************************************* ---\n";
        std::cout << "\n--- ************************************* ---\n";
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf->execute(boss);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
