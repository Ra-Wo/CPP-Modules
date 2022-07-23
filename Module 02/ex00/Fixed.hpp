/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:11:10 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/23 16:46:28 by roudouch         ###   ########.fr       */
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
			Fixed & operator= (Fixed & obj);
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );
	};
	
#endif