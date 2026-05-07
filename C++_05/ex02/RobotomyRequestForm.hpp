#ifndef ROBOTOMYREQUESTFORM_HPP 
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(const std::string& target);
        void executeAction() const;
        ~RobotomyRequestForm();
};

#endif