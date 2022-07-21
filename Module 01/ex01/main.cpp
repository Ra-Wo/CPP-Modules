/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:51:51 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 11:51:51 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main () {

	int size = 8;
	Zombie *z = zombieHorde(size, "Foooooo");

	for (int i = 0; i < size; i++) {
		z[i].announce();
	}
	delete[] z;

	return 0;
}