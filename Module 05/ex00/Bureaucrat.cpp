/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:37 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/23 14:36:09 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150)
{
    std::cout << "Bureaucrat default costractor is called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << "Bureaucrat params costractor is called\n";
    if (grade > 150) throw 1;
    if (grade < 1) throw 2;
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &src)
{
    std::cout << "Bureaucrat copy costractor is called\n";
    *this = src;
}

Bureaucrat::~Bureaucrat()
{

    std::cout << "Bureaucrat destractor is called\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &src)
{
    this->_grade = src._grade;
    return *this;
}

std::ostream &operator<<(std::ostream &cout, Bureaucrat &src) {
    cout << src.getName() << ", bureaucrat grade " << src.getGrade();
    return cout;
}

// getters
std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade()
{
    return this->_grade;
}

// methods
void Bureaucrat::GradeTooHighException() {
    std::cout << "Grade is too high!\n";
}

void Bureaucrat::GradeTooLowException() {
    std::cout << "Grade is too low!\n";
}

void Bureaucrat::incrementGrade() {
    if (this->_grade > 1)
       this->_grade--;
    else throw 1;
}

void Bureaucrat::decrementGrade() {
    if (this->_grade < 150)
        this->_grade++;
    else throw 2;
}
