/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:52:46 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 15:33:57 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

	#define HUMANA_HPP
	#include "Weapon.hpp"
	
	class HumanA {
		private:
			std::string name;
			Weapon *weapon;
		public:
			HumanA(std::string name, Weapon &weapon);
			void attack();
	};
	
#endif