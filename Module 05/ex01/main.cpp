/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 15:53:43 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        // Bureaucrat *Rasheed = new Bureaucrat();
        Form *form = new Form("Access library", false, 100, 100);
        Form *form1 = new Form("Access labs", false, 80, 10);

        *form = *form1;

        std::cout << *form << '\n';
        delete form;
        delete form1;
    }
    catch (int err)
    {
        if (err == 1)
            Form::GradeTooHighException();
        if (err == 2)
            Form ::GradeTooLowException();
    }
    std::cout << "\n************************************\n";
    try
    {
        Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 10);
        Form *form = new Form("Access library", false, 100, 100);

        Rasheed->signForm(*form);

        std::cout << '\n' << *form << '\n';
        delete form;
        delete Rasheed;
    }
    catch (int err)
    {
        if (err == 1)
            Form::GradeTooHighException();
        if (err == 2)
            Form ::GradeTooLowException();
    }
    std::cout << "\n************************************\n";
    return 0;
}
