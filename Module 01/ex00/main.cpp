/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:51:14 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/22 18:34:47 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main () {

	Zombie *z = newZombie("batata");
	z->announce();
	delete z;

	randomChump("foo");
	
	return 0;
}