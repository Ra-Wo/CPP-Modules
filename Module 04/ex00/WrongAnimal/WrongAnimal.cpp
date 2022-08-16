/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:39:26 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/15 19:01:30 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


// Constructors and Destructor
WrongAnimal::WrongAnimal()
{
    this->_type = "Unknown";
    std::cout << "WrongAnimal Default Constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout << "WrongAnimal parameterized Constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
    *this = obj;
    std::cout << "WrongAnimal Copy Constructor is called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor is called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
    this->_type = obj._type;
    std::cout << "WrongAnimal Assignment Operator is called" << std::endl;
    return *this;
}

// Getters and Setters
std::string WrongAnimal::getType() const {
    return this->_type;
}

// Methods
void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makeSound is called" << std::endl;
}