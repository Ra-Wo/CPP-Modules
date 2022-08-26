/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:37 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 16:02:28 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &src)
{
    *this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &src)
{
    this->_grade = src._grade;
    return *this;
}

std::ostream &operator<<(std::ostream &cout, Bureaucrat &src)
{
    cout << src.getName() << ", bureaucrat grade " << src.getGrade();
    return cout;
}

// getters ***********************************************************

std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

// methods ***********************************************************

void Bureaucrat::incrementGrade()
{
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << '\n';
    }
    catch (std::exception &error)
    {
        std::cout << this->getName()
                  << " couldn’t sign "
                  << form.getName()
                  << " because "
                  << error.what()
                  << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        if (((Form &)form).getSigned() == false)
            throw Form::FormIsNotSign();
        if (this->getGrade() > ((Form &)form).getRequiredGradeToExecute())
            throw Form::GradeTooLowException();
        ((Form &)form).execute(*this);
    }
    catch (const std::exception &error)
    {
        std::cout << error.what();
    }
    std::cout << this->getName() << " executed " << ((Form &)form).getName() << '\n';
}

// GradeTooHighException ***********************************************************

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
    *this = src;
}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &src)
{
    if (this != &src)
        *this = src;
    return *this;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "[Bureaucrat]: Grade is Too High!\n";
}

// GradeTooLowException ************************************************************

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
    *this = src;
}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &src)
{
    if (this != &src)
        *this = src;
    return *this;
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "[Bureaucrat]: Grade is Too Low!\n";
}