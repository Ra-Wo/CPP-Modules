/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:00:28 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 11:43:12 by roudouch         ###   ########.fr       */
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
    virtual ~Form();
    Form &operator=(const Form &src);

    // methods
    static void GradeTooHighException();
    static void GradeTooLowException();
    void beSigned(Bureaucrat &person);
    virtual void execute(Bureaucrat const & executor) = 0;

    // getters
    const std::string &getName();
    bool &getSigned();
    const int &getRequiredGradeToSign();
    const int &getRequiredGradeToExecute();
};

std::ostream &operator<<(std::ostream &cout, Form &obj);

#endif