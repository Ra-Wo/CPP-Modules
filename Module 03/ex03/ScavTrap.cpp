/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:50:33 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/08 15:43:09 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors and destructors and operators

ScavTrap::ScavTrap() {
    this->Name = "unknown";
    this->HitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    this->Name = name;
    this->HitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
    *this = src;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & obj ) {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->HitPoints = obj.HitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    this->Name = obj.Name;
    return *this;
}

// methods

void ScavTrap::attack(const std::string& target) {
    std::cout   << "ScavTrap " << this->Name << " attacks " << target
                << " at range, causing " << this->attackDamage
                << " points of damage !" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->Name << " is guarding the gate !" << std::endl;
}