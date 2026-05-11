#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
    
}

Intern::Intern(const Intern& other){
    (void)other;
}

AForm* makeShrubbery(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* makeRobotomy(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* makePardon(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
    const std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm *(*factories[3])(const std::string&) = {makeShrubbery, makeRobotomy, makePardon};
    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return factories[i](target);
        }
    }
    std::cout << "Intern error: unknown form name \"" << formName << "\"" << std::endl;
    return NULL;
}

Intern::~Intern(){
    
}