/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 15:03:15 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 99);
        Form *form = new Form("Access library", false, 100, 100);

        form->beSigned(*Rasheed);
        
        std::cout << *form << '\n';
        
        delete form;
        delete Rasheed;
    }
    catch (const std::exception &error)
    {
        std::cout << error.what();
    }

    
    std::cout << "\n************************************\n\n";
    try
    {
        Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 101);
        Form *form = new Form("Access library", false, 100, 100);

        Rasheed->signForm(*form);

        std::cout << '\n' << *form << '\n';
        delete form;
        delete Rasheed;
    }
    catch (const std::exception &error)
    {
        std::cout << error.what();
    }
    std::cout << "\n************************************\n";
    return 0;
}
