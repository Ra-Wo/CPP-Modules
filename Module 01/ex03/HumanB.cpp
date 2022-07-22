/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:13:32 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/22 21:26:14 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() {
	if (this->weapon == NULL) {
		std::cout << this->name << " doesn't have weapon \n";
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType();
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}