/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:51:25 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 11:51:26 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
	#define ZOMBIE_CPP
	#include <iostream>

	class Zombie {
		private:
			std::string name;
		public:
			Zombie (std::string Zname) {
				this->name = Zname;
			}
			~Zombie();
			void announce( void );
	};


	// functions 
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	
#endif