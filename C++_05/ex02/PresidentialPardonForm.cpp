#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 0, 25, 5), target(target){

}

void PresidentialPardonForm::executeAction() const{
    std::cout << target
              << " has been pardoned by Zaphod Beeblebrox"
              << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}