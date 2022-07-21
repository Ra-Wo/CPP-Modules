/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:41:40 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 14:19:55 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

	#define WEAPON_HPP
	#include <iostream>
	
	class Weapon {
		private:
			std::string type;
		public:
			Weapon();
			Weapon(std::string type);
			const std::string &getType();
			void setType(std::string newType);
	};
	
#endif