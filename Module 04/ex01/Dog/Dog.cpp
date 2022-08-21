/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:49:45 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/20 10:16:07 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constructor is called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog parametric Constructor is called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(Dog &obj)
{
    std::cout << "Dog Copy Constructor is called" << std::endl;
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor is called" << std::endl;
    delete this->_brain;
}

Dog &Dog::operator=(Dog const &obj)
{
    std::cout << "Dog Assignment Operator is called" << std::endl;
    this->_type = obj._type;
    delete this->_brain;

    Brain *newBrain = new Brain();
    (*newBrain) = *obj._brain;
    
    this->_brain = newBrain;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog makeSound is called" << std::endl;
}