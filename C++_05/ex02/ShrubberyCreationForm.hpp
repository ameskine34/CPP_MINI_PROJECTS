#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
    std::string target;

    public:
        ShrubberyCreationForm(const std::string& target);
        void executeAction() const;
        ~ShrubberyCreationForm();       
};

#endif