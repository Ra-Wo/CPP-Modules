/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:52:46 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 15:34:57 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

	#define HUMANB_HPP
	#include "Weapon.hpp"
	
	class HumanB {
		private:
			std::string name;
			Weapon *weapon;
		public:
			HumanB(std::string name);
			void attack();
			void setWeapon(Weapon &weapon);
	};
	
#endif