/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:37:24 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 18:28:41 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include <fstream>
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

class Intern
{
private:

public:
    Intern();
    Intern(Intern &src);
    ~Intern();
    Intern &operator=(Intern &src);
    Form *makeForm(std::string formName, std::string formTarget);
    
    // exception
    class FormIsNotFind : public std::exception
    {
    public:
        FormIsNotFind();
        virtual ~FormIsNotFind() throw();
        FormIsNotFind(FormIsNotFind const &src);
        FormIsNotFind &operator=(FormIsNotFind const &src);
        virtual const char *what() const throw();
    };
};

#endif