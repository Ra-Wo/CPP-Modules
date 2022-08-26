/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:36:39 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 18:33:33 by roudouch         ###   ########.fr       */
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
    std::string FormsName[3] = {
        "Robotomy Request",
        "Shrubbery Creation",
        "Presidential Pardon"};
    int i = 0;
    Form *newForm = NULL;
    while (formName != FormsName[i] && i < 3) i++;
    switch (i)
    {
        case 0: newForm = new RobotomyRequestForm(formTarget); break;
        case 1: newForm = new ShrubberyCreationForm(formTarget); break;
        case 2: newForm = new PresidentialPardonForm(formTarget); break;
        default: throw Intern::FormIsNotFind();
    }
    return newForm;
}

// FormIsNotFind ************************************************************

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
    return "[Intern]: Can't Find this Form!!\n";
}