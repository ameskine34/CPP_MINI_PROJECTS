#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(const std::string n, int i) : name(n), grade(i){
    if (i < 1) throw GradeTooHighException();
    if (i > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& p)
{
    os << p.getName() << ", bureaucrat grade  " << p.getGrade();
    return (os);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

int Bureaucrat::increment_grade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    grade -= 1;
    return (grade);
}
int Bureaucrat::decrement_grade()
{
    if (grade >= 150)
    {
        throw GradeTooLowException();
    }
    grade += 1;
    return (grade);
}
void Bureaucrat::signForm(AForm &p)
{
    try{
        p.beSigned(*this);
        std::cout << getName() << " signed " << p.getName() << std::endl;
    }   
    catch(const std::exception &e)
    {
        std::cout << getName() << " couldn't sign " << p.getName() << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &p)
{
    try{
        p.execute(*this);
        std::cout << getName() << " executed " << p.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << getName() << " couldn't execute " << p.getName() << ": " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat(){
}