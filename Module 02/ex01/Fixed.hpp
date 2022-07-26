/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:11:10 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/26 14:11:39 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP
	#include <iostream>
	
	class Fixed {
		private :
			int nb;
			static const int fr_bits = 8;
		public :
			Fixed();
			Fixed(Fixed &obj);
			Fixed(const int n);
			Fixed(const float n);
			Fixed & operator=(Fixed & obj);
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
	};
	
	std::ostream &operator<<(std::ostream &cout, Fixed &obj);

#endif