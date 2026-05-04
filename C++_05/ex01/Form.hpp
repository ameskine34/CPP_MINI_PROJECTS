#ifndef FORM_HPP 
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

#include <iostream>
#include <string>

#define GRADE_REQUIRED 0
#define GRADE_EXECUTE 1

class Form 
{
    private:
        const std::string name;
        bool b_signed;
        const int grade_Required;
        const int grade_Execute;
    public:
        Form();
        Form(const std::string n, bool i, const int j, const int k);
        Form(const Form& other);
        Form& operator=(const Form& other);
        std::string getName() const;
        int getGrade(int i) const;
        bool get_state() const;
        void beSigned(Bureaucrat& obj);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("must be the appropriate grade too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("must be the appropriate grade too low");
                }
        };
};
std::ostream& operator<<(std::ostream& os, const Form& other);

#endif