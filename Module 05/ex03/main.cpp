/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 15:41:08 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Intern.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 4);
        Intern *G = new Intern;
        
        // "Robotomy Request", "Shrubbery Creation", "Presidential Pardon"
        Form *form = G->makeForm("Presidential Pardon", "Batata");

        if (form != NULL)
            std::cout << form->getName() << '\n';

        delete Rasheed;
        delete G;
        delete form;
    }
    catch (int err)
    {
        if (err == 1)
            Form::GradeTooHighException();
        if (err == 2)
            Form ::GradeTooLowException();
    }
    catch (const char *err)
    {
        std::cout << err << '\n';
    }
    catch (...)
    {
        std::cout << "Error!\n";
    }

    std::cout << "\n************************************\n";
    return 0;
}
