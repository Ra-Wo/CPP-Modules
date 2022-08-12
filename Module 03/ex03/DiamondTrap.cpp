/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:25:09 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/12 11:14:40 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors and destructors and operators

DiamondTrap::DiamondTrap() {
    ClapTrap::Name = "Unknown_clap_name";
    this->Name = "unknown";
    this->HitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    this->Name = name;
    ClapTrap::Name = (name + "_clap_name");
    this->HitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & obj ) {
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    this->Name = obj.Name;
    ClapTrap::Name = obj.ClapTrap::Name;
    this->HitPoints = obj.HitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    return *this;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << this->Name << std::endl;
    std::cout << this->ClapTrap::Name << std::endl;
}