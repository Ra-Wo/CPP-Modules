/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:09:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/12 11:19:11 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{

	std::cout << "\n*****************************\n\n";

	DiamondTrap *dt = new DiamondTrap("dt");
	
    dt->attack("Hello");
	dt->whoAmI();
    dt->highFivesGuys();
    dt->guardGate();

    delete dt;

	std::cout << "\n*****************************\n";
	return 0;
}

