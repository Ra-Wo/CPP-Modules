/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:49:44 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/03 13:19:28 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// Constructors and destructors and operators -----------------------------------------------------

ClapTrap::ClapTrap() {
    this->Name          = "Unknown";
    this->HitPoints     = 10;
    this->energyPoints  = 10;
    this->attackDamage  = 0;
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->Name          = name;
    this->HitPoints     = 10;
    this->energyPoints  = 10;
    this->attackDamage  = 0;
    std::cout << "ClapTrap parameterized Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    *this = src;
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj) {
    this->Name          = obj.Name;
    this->HitPoints     = obj.HitPoints;
    this->energyPoints  = obj.energyPoints;
    this->attackDamage  = obj.attackDamage;
    return *this;
    std::cout << "ClapTrap Assignation operator called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->Name << " is dead." << std::endl;
}

// methods ---------------------------------------------------------------------------------------

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->HitPoints > 0) {
        this->energyPoints--;
        std::cout   << "ClapTrap " << this->Name
                    << " attacks " << target << " causing "
                    << this->attackDamage
                    << " points of damage!" << std::endl;
    } else if (this->HitPoints > 0) {
        std::cout << "ClapTrap " << this->Name << " is out of energy." << std::endl;
    } else {
        std::cout << "ClapTrap " << this->Name << " can't attack because is dead." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->HitPoints >= amount) {
        std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
        this->HitPoints -= amount;
    } else 
        std::cout << "ClapTrap " << this->Name << " is dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0 && this->HitPoints > 0) {
        this->energyPoints--;
        this->HitPoints += amount;
        std::cout << "ClapTrap " << this->Name << " is repaired! " << amount << " hit points is back" << std::endl;
    } else if (this->HitPoints > 0)
        std::cout << "ClapTrap " << this->Name << " don't have energy points to repair" << std::endl;
    else
        std::cout << "ClapTrap " << this->Name << " can't repair because is dead" << std::endl;
}