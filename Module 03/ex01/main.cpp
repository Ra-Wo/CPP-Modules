/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:09:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/12 11:05:29 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {


    std::cout << "\n*****************************\n\n";
    

    ScavTrap *scav1 = new ScavTrap("scav1");

    scav1->attack("scav2");

    scav1->takeDamage(20);
    scav1->beRepaired(20);
    scav1->guardGate();

    delete scav1;
    
    std::cout << "\n*****************************\n";
    return 0;
}