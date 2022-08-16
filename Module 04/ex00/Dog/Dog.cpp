/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:49:45 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/15 13:10:58 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constructor is called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog parametric Constructor is called" << std::endl;
}

Dog::Dog(Dog &obj) : Animal(obj)
{
    std::cout << "Dog Copy Constructor is called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor is called" << std::endl;
}

Dog &Dog::operator=(Dog const &obj)
{
    this->_type = obj._type;
    std::cout << "Dog Assignment Operator is called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog makeSound is called" << std::endl;
}