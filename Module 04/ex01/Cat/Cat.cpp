/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:52:27 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/21 12:36:09 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat parameterized constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(Cat &obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat &Cat::operator=(Cat const &obj)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->_type = obj._type;
    delete this->_brain;

    Brain *newBrain = new Brain();
    (*newBrain) = *obj._brain;
    
    this->_brain = newBrain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat makeSound called" << std::endl;
}