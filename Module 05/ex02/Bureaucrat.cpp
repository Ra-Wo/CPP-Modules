/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:37 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 14:25:34 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw 1;
    if (grade < 1)
        throw 2;
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &src)
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
}

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

// getters
std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

// methods
void Bureaucrat::GradeTooHighException()
{
    std::cout << "Grade is too high!\n";
}

void Bureaucrat::GradeTooLowException()
{
    std::cout << "Grade is too low!\n";
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade > 1)
        this->_grade--;
    else
        throw 1;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw 2;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << '\n';
    }
    catch (...)
    {
        std::cout << this->getName()
                  << " couldn’t sign "
                  << form.getName()
                  << " because grade is too low!\n";
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    if (((Form &)form).getSigned() == false)
        throw "The form is not sign!";
    if (this->getGrade() > ((Form &)form).getRequiredGradeToExecute())
        throw 2;
    try
    {
        ((Form &)form).execute(*this);
    }
    catch (int err)
    {
        if (err == 1)
            Form::GradeTooHighException();
        if (err == 2)
            Form ::GradeTooLowException();
    }
    catch (const char *err)
    {
        std::cout << err << '\n';
    }
    catch (...)
    {
        std::cout << "Error!\n";
    }
    std::cout << this->getName() << " executed " << ((Form &)form).getName() << '\n';
}