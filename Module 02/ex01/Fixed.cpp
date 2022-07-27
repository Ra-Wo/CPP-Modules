/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:17:33 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/27 16:16:48 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default Constructor  -------------------------------------------------------
Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->nb = 0;
}

// Parameterized Constructor (int) --------------------------------------------
Fixed::Fixed( const int num ) {
	std::cout << "Int constructor called\n";
	this->nb = roundf(num * (1 << this->fr_bits));
}

// Parameterized Constructor (int) --------------------------------------------
Fixed::Fixed( const float num ) {
	std::cout << "Float constructor called\n";
	this->nb = roundf(num * (1 << this->fr_bits));
}

// copy constructor  ----------------------------------------------------------
Fixed::Fixed( Fixed const & obj ) {
	std::cout << "Copy constructor called\n";
	(*this) = obj;
}

// destructor  ----------------------------------------------------------------
Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

// assignment operator overload  ----------------------------------------------
Fixed & Fixed::operator=( Fixed const & obj ) {
	std::cout << "Copy assignment operator called\n";
	if (this != &obj) {
		nb = obj.getRawBits();
	}
	return (*this);
}

// the insertion («) operator  ------------------------------------------------
std::ostream & operator<<( std::ostream & cout, Fixed const & obj ) {
	cout << obj.toFloat();
	return cout;
}

// getters and setters --------------------------------------------------------
int Fixed::getRawBits( void ) const {
	return this->nb;
}

void Fixed::setRawBits( int const raw ) {
	this->nb = raw;
}

// methods --------------------------------------------------------------------
float Fixed::toFloat( void ) const{
	return ((float)this->getRawBits() / (float)(1 << this->fr_bits));
}


int Fixed::toInt( void ) const {
	return (roundf(this->getRawBits() >> (this->fr_bits)));
}