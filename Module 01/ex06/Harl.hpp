/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:39:13 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/21 10:44:51 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

	#define HARL_HPP
	#include <iostream>
	
	class Harl {
		private :
		
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );

		public :
		
			void complain( std::string level );
	};
	
#endif