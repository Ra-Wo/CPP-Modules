/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:18 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 14:13:28 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "./Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(Bureaucrat &src);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat &src);

    // getters
    std::string getName();
    int getGrade() const;

    // methods
    static void GradeTooHighException();
    static void GradeTooLowException();
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
    void executeForm(Form const & form);
    
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat &src);

#endif