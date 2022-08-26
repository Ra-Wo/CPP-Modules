/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 16:35:59 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

// int main()
// {
//     std::cout << "************************************\n\n";
//     try
//     {
//         PresidentialPardonForm *a = new PresidentialPardonForm("Killer Ahmed");
//         Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 4);

//         Rasheed->decrementGrade();

//         Rasheed->signForm(*a);
//         a->execute(*Rasheed);

//         Rasheed->executeForm(*a);

//         delete a;
//         delete Rasheed;
//     }
//     catch (std::exception &error)
//     {
//         std::cout << error.what() << '\n';
//     }
//     std::cout << "\n************************************\n";
//     return 0;
// }

// int main()
// {
//     std::cout << "************************************\n\n";
//     try
//     {
//         RobotomyRequestForm *a = new RobotomyRequestForm("Home");
//         Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 44);

//         Rasheed->signForm(*a);
//         a->execute(*Rasheed);

//         delete a;
//         delete Rasheed;
//     }
//     catch (std::exception &error)
//     {
//         std::cout << error.what() << '\n';
//     }

//     std::cout << "\n************************************\n";
//     return 0;
// }

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        ShrubberyCreationForm *a = new ShrubberyCreationForm("Home");
        Bureaucrat *Rasheed = new Bureaucrat("Rasheed", 50);

        Rasheed->signForm(*a);
        a->execute(*Rasheed);

        delete Rasheed;
        delete a;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << '\n';
    }

    std::cout << "\n************************************\n";
    return 0;
}
