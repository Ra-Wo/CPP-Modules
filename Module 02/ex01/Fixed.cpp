/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:17:33 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/23 18:32:06 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->nb = 0;
}

Fixed::Fixed(Fixed & obj) {
	std::cout << "Copy constructor called\n";
	(*this) = obj;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed & Fixed::operator=(Fixed & obj) {
	std::cout << "Copy assignment operator called\n";
	if (this != &obj) {
		nb = obj.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return this->nb;
}

void Fixed::setRawBits( int const raw ) {
	this->nb = raw;
}