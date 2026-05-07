#ifndef PRESIDENTIALPARDONFORM_HPP 
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
    PresidentialPardonForm(const std::string& target);
    void executeAction() const;
    ~PresidentialPardonForm();    
};

#endif