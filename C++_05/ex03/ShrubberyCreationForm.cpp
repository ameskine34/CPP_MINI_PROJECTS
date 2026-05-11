#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreation" ,0, 145, 137), target(target){
    
}

void ShrubberyCreationForm::executeAction() const 
{
    std::ofstream file((target + "_shrubbery").c_str()); //to be tested without the c_str

    file << "   /\\\n";
    file << "  /**\\\n";
    file << " /****\\\n";
    file << "/******\\\n";
    file << "  |||\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (!get_state())
        throw GradeTooLowException();
    if (executor.getGrade() > getGrade(GRADE_EXECUTE))
        throw GradeTooLowException();
    executeAction();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

//ofstream	Creates and writes to files (to write from)
// ifstream	Reads from files (to read from)
//fstream A combination of ofstream and ifstream :creates, reads, and writes to files