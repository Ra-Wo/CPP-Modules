/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:57:06 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 16:55:51 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", false, 25, 5)
{
    this->_target = ("unknown");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm", false, 25, 5)
{
    this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src)
    : Form(src.getName(), src.getSigned(), src.getRequiredGradeToSign(), src.getRequiredGradeToExecute())
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &src)
{
    if (this != &src)
        this->_target = src._target;
    return *this;
}

// gettter & setter
std::string &PresidentialPardonForm::getTarget(void)
{
    return this->_target;
}

void PresidentialPardonForm::setTarget(std::string &target)
{
    this->_target = target;
}

// methods
void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if (this->getSigned() == false)
        throw Form::FormIsNotSign();
    if (executor.getGrade() > this->getRequiredGradeToExecute())
        throw Form::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}