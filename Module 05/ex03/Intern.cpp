/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:36:39 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/25 15:17:26 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern &src)
{
    (void)src;
    *this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern &src)
{
    (void)src;
    return *this;
}

Form *makeForm(std::string formName, std::string formTarget)
{
    (void)formTarget;
    (void)formName;
    // std::string Forms[3] = {
    //     "Robotomy Request",
    //     "Shrubbery Creation",
    //     "Presidential Pardon"};
    
    // for (int i = 0; i < 3; i++)
    // {
    //     if (formName == Forms[i]) {
            
    //         switch (i) {
    //             case 1:
    //                 std::cout << "Robotomy Request\n";
    //                 break;
                
    //         }
            
    //         break;
    //     }
    // }
    return NULL;
}