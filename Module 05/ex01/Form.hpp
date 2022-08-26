/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:00:28 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 13:57:25 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _required_grade_to_sign;
    const int _required_grade_to_execute;

public:
    Form();
    Form(
        const std::string name,
        bool isSigned,
        int required_grade_to_sign,
        int required_grade_to_execute
    );
    Form(Form &src);
    ~Form();
    Form &operator=(const Form &src);

    // methods
    void beSigned(Bureaucrat &person);

    // getters
    const std::string &getName();
    bool &getSigned();
    const int &getRequiredGradeToSign();
    const int &getRequiredGradeToExecute();

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
};

std::ostream &operator<<(std::ostream &cout, Form &obj);

#endif