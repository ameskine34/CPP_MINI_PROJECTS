#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 0, 25, 5), target(target){

}

void PresidentialPardonForm::executeAction() const{
    std::cout << target
              << " has been pardoned by Zaphod Beeblebrox"
              << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (!get_state())
        throw GradeTooLowException();
    if (executor.getGrade() > getGrade(GRADE_EXECUTE))
        throw GradeTooLowException();
    executeAction();
}

PresidentialPardonForm::~PresidentialPardonForm(){

}