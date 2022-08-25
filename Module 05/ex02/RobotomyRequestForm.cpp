/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:57:06 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 14:02:10 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", false, 72, 45)
{
    this->_target = ("unknown");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm", false, 72, 45)
{
    this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src)
    : Form(src.getName(), src.getSigned(), src.getRequiredGradeToSign(), src.getRequiredGradeToExecute())
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &src)
{
    if (this != &src)
        this->_target = src._target;
    return *this;
}

// gettter & setter
std::string &RobotomyRequestForm::getTarget(void)
{
    return this->_target;
}

void RobotomyRequestForm::setTarget(std::string &target)
{
    this->_target = target;
}

// methods
void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    if (this->getSigned() == false)
        throw "The robotomy failed!";
    if (executor.getGrade() > this->getRequiredGradeToExecute())
        throw 2;
    std::cout << "@ !!! Drilling noises !!! @\n";
    std::cout << "has been robotomized successfully 50% of the time.\n";
}