/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:12:04 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/26 14:35:08 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "************************************\n\n";
    try
    {
        Bureaucrat *obj = new Bureaucrat("Rasheed", 148);
        obj->decrementGrade();
        obj->decrementGrade();
        std::cout << (obj->getName()) << " " << (obj->getGrade()) << "\n";
        delete obj;
    }
    catch (const std::exception &error)
    {
        std::cout << error.what();
    }
    std::cout << "\n************************************\n";
    return 0;
}
