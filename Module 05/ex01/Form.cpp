/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:05:57 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 15:53:06 by roudouch         ###   ########.fr       */
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
        throw 1;
    if (required_grade_to_sign < 1 || required_grade_to_execute < 1)
        throw 2;
    this->_signed = isSigned;
}

Form::Form(Form &src)
    : _name(src._name),
      _required_grade_to_sign(src._required_grade_to_sign),
      _required_grade_to_execute(src._required_grade_to_execute)
{
    *this = src;
}

Form::~Form()
{
}

Form &Form::operator=(const Form &src)
{
    this->_signed = src._signed;
    return *this;
}

// methods
void Form::GradeTooHighException()
{
    std::cout << "Grade is too high!!\n";
}

void Form::GradeTooLowException()
{
    std::cout << "Grade is too low!\n";
}

void Form::beSigned(Bureaucrat &person) {
    if (person.getGrade() > this->getRequiredGradeToSign())
        throw 2;
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
