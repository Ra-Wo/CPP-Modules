/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:36:39 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 15:39:44 by roudouch         ###   ########.fr       */
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
    (void)formTarget;
    std::string Forms[3] = {
        "Robotomy Request",
        "Shrubbery Creation",
        "Presidential Pardon"
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == Forms[i])
        {
            switch (i)
            {
                case 0:
                    return new RobotomyRequestForm(formTarget);
                    break;
                case 1:
                    return new ShrubberyCreationForm(formTarget);
                    break;
                case 2:
                    return new PresidentialPardonForm(formTarget);
                    break;
            }
            break;
        }
    }
    return NULL;
}