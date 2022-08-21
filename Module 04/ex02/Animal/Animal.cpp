/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:39:26 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/19 15:34:04 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


// Constructors and Destructor

Animal::Animal()
{
    std::cout << "Animal Default Constructor is called" << std::endl;
    this->_type = "Unknown";
    this->_brain = new Brain();
}

Animal::Animal(std::string type)
{
    std::cout << "Animal parameterized Constructor is called" << std::endl;
    this->_type = type;
    this->_brain = new Brain();
}

Animal::Animal(Animal &obj)
{
    std::cout << "Animal Copy Constructor is called" << std::endl;
    *this = obj;
}

Animal::~Animal()
{
    delete this->_brain;
    std::cout << "Animal Destructor is called" << std::endl;
}

Animal &Animal::operator=(Animal const &obj)
{
    std::cout << "Animal Assignment Operator is called" << std::endl;
    this->_type = obj._type;
    delete this->_brain;
    this->_brain = obj._brain;
    return *this;
}

// Getters and Setters
std::string Animal::getType() const {
    return this->_type;
}
