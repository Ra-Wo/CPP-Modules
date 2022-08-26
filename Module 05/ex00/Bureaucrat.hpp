/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:18 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 13:38:15 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

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
    int getGrade();

    // exception
    class GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException();
        virtual ~GradeTooHighException() throw();
        GradeTooHighException(GradeTooHighException const &src);
        GradeTooHighException &operator=(GradeTooHighException const &src);
        virtual const char *what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
        GradeTooLowException();
        virtual ~GradeTooLowException() throw();
        GradeTooLowException(GradeTooLowException const &src);
        GradeTooLowException &operator=(GradeTooLowException const &src);
        virtual const char *what() const throw();
    };
    
    // methods
    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat &src);

#endif