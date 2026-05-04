#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(const std::string n, int i) : name(n), grade(i){
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
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
Bureaucrat::~Bureaucrat()
{

}