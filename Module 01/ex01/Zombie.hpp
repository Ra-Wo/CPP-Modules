/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:52:06 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/22 18:35:33 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
	#define ZOMBIE_CPP
	#include <iostream>

	class Zombie {
		private:
			std::string name;

		public:
			Zombie();
			~Zombie ();
			Zombie (std::string Zname);
			void announce( void );
	};


	// functions 
	Zombie*	newZombie( std::string name );
	Zombie*	zombieHorde( int N, std::string name );
	
#endif