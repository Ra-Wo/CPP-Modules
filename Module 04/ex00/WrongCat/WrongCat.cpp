/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:52:27 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/15 19:01:36 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat parameterized constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &obj)
{
    this->_type = obj._type;
    std::cout << "WrongCat assignment operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makeSound called" << std::endl;
}