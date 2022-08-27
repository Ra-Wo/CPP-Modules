/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/27 11:52:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "./Intern.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 4);
        Intern *G = new Intern;
        
        // "Robotomy Request", "Shrubbery Creation", "Presidential Pardon"
        Form *form = G->makeForm("Shrubbery Creation", "Batata");

        std::cout   << "Form Name: "
                    << form->getName() 
                    << ", Target: "
                    << ((ShrubberyCreationForm *)form)->getTarget()
                    << '\n';

        delete Rasheed;
        delete G;
        delete form;
    }
    catch (std::exception &error) {
        std::cout << error.what();
    }

    std::cout << "\n************************************\n";
    return 0;
}
