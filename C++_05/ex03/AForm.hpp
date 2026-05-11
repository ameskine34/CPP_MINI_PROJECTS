#ifndef AFORM_HPP 
#define AFORM_HPP


#include <iostream>
#include <string>
class Bureaucrat;

#define GRADE_REQUIRED 0
#define GRADE_EXECUTE 1

class AForm 
{
    private:
        const std::string name;
        bool b_signed;
        const int grade_Required;
        const int grade_Execute;
    public:
        AForm();
        AForm(const std::string n, bool i, const int j, const int k);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        std::string getName() const ;
        int getGrade(int i) const;
        bool get_state() const;
        void beSigned(Bureaucrat& obj);
        virtual void execute(Bureaucrat const & executor) const = 0;
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
std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif