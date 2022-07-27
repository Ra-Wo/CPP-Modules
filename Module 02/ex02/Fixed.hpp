/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:11:10 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/27 18:12:20 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP
	#include <iostream>
	#include <cmath>
	
	class Fixed {
		private :
			int nb;
			static const int fr_bits = 8;
			
		public :
			// constructors & destructor
			Fixed();
			Fixed( Fixed const & obj );
			Fixed( const int num );
			Fixed( const float num );
			~Fixed();
			
			// overload Assignment operators
			Fixed & operator=( Fixed const & obj );

			// The 4 arithmetic operators:
			Fixed operator*( const Fixed & );
			Fixed operator+( const Fixed & );
			Fixed operator-( const Fixed & );
			Fixed operator/( const Fixed & );
			
			//The 4 increment/decrement
			Fixed & operator++();
			Fixed operator++(int);
			Fixed & operator--();
			Fixed operator--(int);
			
			// The 6 comparison operators
			int operator>(Fixed const & obj);
			int operator<(Fixed const & obj);
			int operator<=(Fixed const & obj);
			int operator>=(Fixed const & obj);
			int operator==(Fixed const & obj);
			int operator!=(Fixed const & obj);
			
			// methods
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
			
			// static methods
			static Fixed const & min(Fixed const &one, Fixed const &two);
			static Fixed const & max(Fixed const &one, Fixed const &two);
			static Fixed & min(Fixed &one, Fixed &two);
			static Fixed & max(Fixed &one, Fixed &two);
	};
	
	std::ostream &operator<<(std::ostream & cout, Fixed const & obj);

#endif