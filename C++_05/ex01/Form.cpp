// #include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

Form::Form() : name("default"), b_signed(0), grade_Required(150), grade_Execute(150)
{
}

Form::Form(const std::string n, bool i, const int j, const int k) : name(n), b_signed(i), grade_Required(j), grade_Execute(k)
{
}

Form::Form(const Form& other) : name(other.name), b_signed(other.b_signed), grade_Required(other.grade_Required), grade_Execute(other.grade_Execute)
{
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        this->b_signed = other.b_signed;
    }
    return (*this);
}

std::string Form::getName() const
{
    return (name);
}

bool Form::get_state() const
{
    return (b_signed);
}

int Form::getGrade(int i) const
{
    if (i == GRADE_REQUIRED)
        return (grade_Required);
    else if (i == GRADE_EXECUTE)
        return (grade_Execute);
    return (0);
}

void Form::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() <= getGrade(GRADE_REQUIRED))
    {
        this->b_signed = 1;
    }
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& p)
{
    os << "name: "<< p.getName() << "/ " << "grade state: " << p.get_state() << "/ "
    << "required grade: " << p.getGrade(0) << "/ " << "execute grade: " << p.getGrade(1);
    return (os);
}