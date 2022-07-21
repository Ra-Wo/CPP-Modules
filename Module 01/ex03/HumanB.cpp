/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:13:32 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 15:34:54 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType();
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name) {
	this->name = name;
}