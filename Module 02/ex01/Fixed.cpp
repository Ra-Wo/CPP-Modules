/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:17:33 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/26 15:01:58 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default Constructor
Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->nb = 0;
}

// copy constructor
Fixed::Fixed(Fixed & obj) {
	std::cout << "Copy constructor called\n";
	(*this) = obj;
}

// destructor
Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

// assignment operator overload
Fixed & Fixed::operator=(Fixed & obj) {
	std::cout << "Copy assignment operator called\n";
	if (this != &obj) {
		nb = obj.getRawBits();
	}
	return (*this);
}

// the insertion («) operator 
std::ostream & operator<<(std::ostream & cout, Fixed & obj) {
	cout << obj.getRawBits();
	return cout;
}

// getters and setters
int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return this->nb;
}

void Fixed::setRawBits( int const raw ) {
	this->nb = raw;
}


// methods
float Fixed::toFloat( void ) const{
	return ((float)this->nb / (float)(1 << 8));
}


int Fixed::toInt( void ) const {
	return (round(this->nb * (1 << 8)));
}