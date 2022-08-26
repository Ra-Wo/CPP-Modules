/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:57:06 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 16:36:24 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", false, 145, 137)
{
    this->_target = ("unknown");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", false, 145, 137)
{
    this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src)
    : Form(src.getName(), src.getSigned(), src.getRequiredGradeToSign(), src.getRequiredGradeToExecute())
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src)
{
    if (this != &src)
        this->_target = src._target;
    return *this;
}

// gettter & setter
std::string &ShrubberyCreationForm::getTarget(void)
{
    return this->_target;
}

void ShrubberyCreationForm::setTarget(std::string &target)
{
    this->_target = target;
}

// methods
void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    if (this->getSigned() == false)
        throw Form::FormIsNotSign();
    if (executor.getGrade() > this->getRequiredGradeToExecute())
        throw Form::GradeTooLowException();
    std::ofstream file(this->getTarget() + "_shrubbery");

    file << "          o88" << '\n';
    file << "         ccee88oo" << '\n';
    file << "  C8O8O8Q8PoOb o8oo" << '\n';
    file << " dOB69QO8PdUOpugoO9bD" << '\n';
    file << "CgggbU8OU qOp qOdoUOdcb" << '\n';
    file << "    6OuU  /p u gcoUodpP" << '\n';
    file << "      \\\\//  /douUP" << '\n';
    file << "        \\\\////" << '\n';
    file << "         |||/\\" << '\n';
    file << "         |||\\/" << '\n';
    file << "         |||||" << '\n';
    file << "   .....//||||\\...." << '\n';

    file.close();
}