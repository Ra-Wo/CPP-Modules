/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:11:10 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/27 11:47:29 by roudouch         ###   ########.fr       */
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
			Fixed();
			Fixed(Fixed const & obj);
			Fixed(const int num);
			Fixed(const float num);
			~Fixed();
			
			Fixed & operator=(Fixed const & obj);
			
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
	};
	
	std::ostream &operator<<(std::ostream & cout, Fixed const & obj);

#endif