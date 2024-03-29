/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:09:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/12 11:08:50 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{

	std::cout << "\n*****************************\n\n";

	FragTrap *fragtrap1 = new FragTrap("fragtrap1");

	fragtrap1->attack("fragtrap2");
	fragtrap1->beRepaired(20);
    fragtrap1->takeDamage(30);
	fragtrap1->highFivesGuys();

    delete fragtrap1;
    
	std::cout << "\n*****************************\n";
	return 0;
}