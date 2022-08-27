/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:36:39 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/27 11:56:46 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern &src)
{
    (void)src;
    *this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern &src)
{
    (void)src;
    return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{

    std::string FormsName[] = {
        "Robotomy Request",
        "Shrubbery Creation",
        "Presidential Pardon",
    };

    Forms methods = {
        &Intern::createRobotomy,
        &Intern::createShrubbery,
        &Intern::createPresidentPardon
    };

    int i = 0;
    while (formName != FormsName[i] && i < 3) i++;
    return (i < 3 ? (this->*methods[i])(formTarget) : throw Intern::FormIsNotFind());
}

// Exception: FormIsNotFind ************************************************************
Intern::FormIsNotFind::FormIsNotFind() {}
Intern::FormIsNotFind::~FormIsNotFind() throw() {}
Intern::FormIsNotFind::FormIsNotFind(FormIsNotFind const &src)
{
    *this = src;
}
Intern::FormIsNotFind &Intern::FormIsNotFind::operator=(FormIsNotFind const &src)
{
    if (this != &src)
        *this = src;
    return *this;
}
const char *Intern::FormIsNotFind::what() const throw()
{
    return "[Intern]: Can't Find this Form !!!\n";
}

// methods
Form *Intern::createRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form *Intern::createShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}
Form *Intern::createPresidentPardon(std::string target)
{
    return new PresidentialPardonForm(target);
}
