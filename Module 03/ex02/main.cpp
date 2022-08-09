/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:09:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/09 10:31:43 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{

	std::cout << "\n*****************************\n\n";

	ClapTrap clap1("Clap1");
	ScavTrap scav1("Scav1");

	FragTrap fragtrap1("fragtrap1");
	FragTrap fragtrap2("fragtrap2");

	fragtrap2.attack("fragtrap1");
	fragtrap1.beRepaired(20);
	fragtrap1.attack("fragtrap2");
	fragtrap1.highFivesGuys();

	std::cout << "\n*****************************\n";
	return 0;
}