#ifndef BUREAUCRAT_HPP 
#define BUREAUCRAT_HPP

// #include "Form.hpp"
class Form;
#include <iostream>
#include <string>

class Bureaucrat 
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string n, int i);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat &operator=(const Bureaucrat& other);
        std::string getName() const;
        int getGrade() const;
        int increment_grade();
        int decrement_grade();
        void signForm(Form& p);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("1 is the highest grade");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("150 is the lowest grade");
                }
        };
        ~Bureaucrat();
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif