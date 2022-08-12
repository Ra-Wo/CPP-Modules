/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:59:12 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/08 18:25:15 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors and destructors and operators
FragTrap::FragTrap() {
    this->Name          = "Unknown";
    this->HitPoints     = 100;
    this->energyPoints  = 100;
    this->attackDamage  = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->Name          = name;
    this->HitPoints     = 100;
    this->energyPoints  = 100;
    this->attackDamage  = 30;
    std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
    *this = src;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj) {
    this->Name          = obj.Name;
    this->HitPoints     = obj.HitPoints;
    this->energyPoints  = obj.energyPoints;
    this->attackDamage  = obj.attackDamage;
    return *this;
    std::cout << "FragTrap assignation operator called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->Name << " is dead." << std::endl;
}

// methods
void FragTrap::highFivesGuys(void) {
    if (this->HitPoints > 0) {
        std::cout   << "FragTrap " << this->Name
                    << " high fives everybody!" << std::endl;
    } else {
        std::cout << "FragTrap " << this->Name << " is dead." << std::endl;
    }
}