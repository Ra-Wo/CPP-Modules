/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:17:33 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/27 18:12:37 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default Constructor  -------------------------------------------------------
Fixed::Fixed() {
	// std::cout << "Default constructor called\n";
	this->nb = 0;
}

// Parameterized Constructor (int) --------------------------------------------
Fixed::Fixed( const int num ) {
	// std::cout << "Int constructor called\n";
	this->nb = (num * (1 << this->fr_bits));
}

// Parameterized Constructor (int) --------------------------------------------
Fixed::Fixed( const float num ) {
	// std::cout << "Float constructor called\n";
	this->nb = roundf(num * (1 << this->fr_bits));
}

// copy constructor  ----------------------------------------------------------
Fixed::Fixed( Fixed const & obj ) {
	// std::cout << "Copy constructor called\n";
	(*this) = obj;
}

// destructor  ----------------------------------------------------------------
Fixed::~Fixed() {
	// std::cout << "Destructor called\n";
}

// assignment operator overload  ----------------------------------------------
Fixed & Fixed::operator=( Fixed const & obj ) {
	// std::cout << "Copy assignment operator called\n";
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
	return ((this->getRawBits() >> (this->fr_bits)));
}

// comparison operators  -------------------------------------------------------

int Fixed::operator>(Fixed const & obj) {
	if ( this->toFloat() > obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator<(Fixed const & obj) {
	if ( this->toFloat() < obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator<=(Fixed const & obj) {
	if ( this->toFloat() <= obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator>=(Fixed const & obj) {
	if ( this->toFloat() >= obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator==(Fixed const & obj) {
	if ( this->toFloat() == obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator!=(Fixed const & obj) {
	if ( this->toFloat() != obj.toFloat() )
		return 1;
	else 
		return 0;
}

// arithmetic operators ----------------------------------------------------------
Fixed Fixed::operator*( const Fixed &r ) {
	Fixed result(this->toFloat() * r.toFloat());
	return result;
}

Fixed Fixed::operator+( const Fixed &r ) {
	Fixed result(this->toFloat() + r.toFloat());
	return result;
}

Fixed Fixed::operator-( const Fixed &r ) {
	Fixed result(this->toFloat() - r.toFloat());
	return result;
}

Fixed Fixed::operator/( const Fixed &r ) {
	Fixed result(this->toFloat() / r.toFloat());
	return result;
}

// The 4 increment/decrement------------------------------------------------------
// overload ++ pre
Fixed & Fixed::operator++() {
	this->nb++;
	return *(this);
}

// overload ++ post 
Fixed Fixed::operator++(int) {
	Fixed backup(*this);
	this->nb++;
	return backup;
}

// overload -- pre
Fixed & Fixed::operator--() {
	this->nb--;
	return *(this);
}

// overload ++ post 
Fixed Fixed::operator--(int) {
	Fixed backup(*this);
	this->nb--;
	return backup;
}


// min -------------------------------------------------------------------
Fixed const & Fixed::min(Fixed const &one, Fixed const &two) {
	if (one.toFloat() < two.toFloat()) return one;
	return two;
}

// max -------------------------------------------------------------------
Fixed const & Fixed::max(Fixed const &one, Fixed const &two) {
	if (one.toFloat() > two.toFloat()) return one;
	return two;
}

// min -------------------------------------------------------------------
Fixed & Fixed::min(Fixed &one, Fixed &two) {
	if (one.toFloat() < two.toFloat()) return one;
	return two;
}

// max -------------------------------------------------------------------
Fixed & Fixed::max(Fixed &one, Fixed &two) {
	if (one.toFloat() > two.toFloat()) return one;
	return two;
}