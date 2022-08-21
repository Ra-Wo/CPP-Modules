/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:52:27 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/19 18:51:38 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->_brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->_brain = new Brain();
    std::cout << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(Cat &obj)
{
    *this = obj;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &obj)
{
    this->_type = obj._type;
    delete this->_brain;
    this->_brain = obj._brain;
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat makeSound called" << std::endl;
}