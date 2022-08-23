/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/23 14:36:05 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {
    
    Bureaucrat *R = new Bureaucrat("Rasheed", 5);
    std::cout << *R << "\n";
    delete R;
    
    return 0;
}

// int main()
// {

//     std::cout << "************************************\n\n";
    
//     try {

//         Bureaucrat *obj = new Bureaucrat("Rasheed", 148);
//         obj->decrementGrade();
//         obj->decrementGrade();
//         std::cout << (obj->getName()) << " " << (obj->getGrade()) << "\n";
//         delete obj;
    
//     } catch (int err) {
//         if (err == 1) Bureaucrat::GradeTooHighException();
//         if (err == 2) Bureaucrat::GradeTooLowException();
//     }
    
//     std::cout << "\n************************************\n";

//     return 0;
// }

// int main()
// {

//     std::cout << "************************************\n\n";
    
//     try {

//         Bureaucrat *obj = new Bureaucrat("Rasheed", 15);
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         obj->incrementGrade();
//         std::cout << (obj->getName()) << " " << (obj->getGrade()) << "\n";
//         delete obj;
    
//     } catch (int err) {
//         if (err == 1) Bureaucrat::GradeTooHighException();
//         if (err == 2) Bureaucrat::GradeTooLowException();
//     }
    
//     std::cout << "\n************************************\n";

//     return 0;
// }


// int main()
// {

//     std::cout << "************************************\n\n";
    
//     try {

//         Bureaucrat *obj = new Bureaucrat("Rasheed", 15);
//         std::cout << (obj->getName()) << " " << (obj->getGrade()) << "\n";
//         delete obj;
    
//     } catch (int err) {
//         if (err == 1) Bureaucrat::GradeTooHighException();
//         if (err == 2) Bureaucrat::GradeTooLowException();
//     }
    
//     std::cout << "\n************************************\n";

//     return 0;
// }