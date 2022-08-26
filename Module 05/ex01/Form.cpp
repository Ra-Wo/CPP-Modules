/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:05:57 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 15:05:14 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("NO NAME"),
               _required_grade_to_sign(150),
               _required_grade_to_execute(150)
{
    _signed = false;
}

Form::Form(
    const std::string name,
    bool isSigned,
    int required_grade_to_sign,
    int required_grade_to_execute)
    : _name(name),
      _required_grade_to_sign(required_grade_to_sign),
      _required_grade_to_execute(required_grade_to_execute)
{
    if (required_grade_to_sign > 150 || required_grade_to_execute > 150)
        throw Form::GradeTooLowException();
    if (required_grade_to_sign < 1 || required_grade_to_execute < 1)
        throw Form::GradeTooHighException();
    this->_signed = isSigned;
}

Form::Form(Form &src)
    : _name(src._name),
      _required_grade_to_sign(src._required_grade_to_sign),
      _required_grade_to_execute(src._required_grade_to_execute)
{
    *this = src;
}

Form::~Form() {}

Form &Form::operator=(const Form &src)
{
    this->_signed = src._signed;
    return *this;
}

void Form::beSigned(Bureaucrat &person) {
    if (person.getGrade() > this->getRequiredGradeToSign())
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}

// getters
const std::string &Form::getName()
{
    return this->_name;
}

bool &Form::getSigned()
{
    return this->_signed;
}

const int &Form::getRequiredGradeToSign()
{
    return this->_required_grade_to_sign;
}

const int &Form::getRequiredGradeToExecute()
{
    return this->_required_grade_to_execute;
}

//overload operator <<

std::ostream &operator<<(std::ostream &cout, Form &obj) {
    cout    << "Form name: " << obj.getName()
            << "\nGrade required to sign it: " << obj.getRequiredGradeToSign()
            << "\nGrade required to execute it: " << obj.getRequiredGradeToExecute()
            << "\nSigned?: " << (obj.getSigned() == 0? "false" : "true");
    return cout;
}

// GradeTooHighException ***********************************************************

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
    *this = src;
}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &src)
{
    if (this != &src)
        *this = src;
    return *this;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return "[Form]: Grade is Too high!\n";
}

// GradeTooLowException ************************************************************

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
    *this = src;
}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &src)
{
    if (this != &src)
        *this = src;
    return *this;
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "[Form]: Grade is Too Low!\n";
}