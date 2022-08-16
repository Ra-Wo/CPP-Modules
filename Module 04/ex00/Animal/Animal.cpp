/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:39:26 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/15 13:18:14 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


// Constructors and Destructor

Animal::Animal()
{
    this->_type = "Unknown";
    std::cout << "Animal Default Constructor is called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "Animal parameterized Constructor is called" << std::endl;
}

Animal::Animal(Animal &obj)
{
    *this = obj;
    std::cout << "Animal Copy Constructor is called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor is called" << std::endl;
}

Animal &Animal::operator=(Animal const &obj)
{
    this->_type = obj._type;
    std::cout << "Animal Assignment Operator is called" << std::endl;
    return *this;
}

// Getters and Setters
std::string Animal::getType() const {
    return this->_type;
}

// Methods
void Animal::makeSound() const {
    std::cout << "Animal makeSound is called" << std::endl;
}