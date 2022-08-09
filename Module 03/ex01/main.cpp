/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:09:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/08 15:44:30 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {


    std::cout << "\n*****************************\n\n";
    

    ScavTrap *scav1 = new ScavTrap("scav1");
    ScavTrap *scav2 = new ScavTrap("scav2");

    scav1->attack("scav2");
    scav2->attack("scav1");

    scav1->takeDamage(20);
    scav1->beRepaired(20);

    
    std::cout << "\n*****************************\n";
    return 0;
}