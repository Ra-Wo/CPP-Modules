/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:44:53 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 14:05:23 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() {
	
	const std::string &type = this->type;
	return type;
}

void Weapon::setType(std::string newType) {
	this->type = newType;
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::Weapon() {
}