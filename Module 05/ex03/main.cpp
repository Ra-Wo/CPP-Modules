/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 18:32:08 by roudouch         ###   ########.fr       */
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
        Form *form = G->makeForm("Robotomy Request", "Batata");

        if (form != NULL)
            std::cout << form->getName() << '\n';

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
