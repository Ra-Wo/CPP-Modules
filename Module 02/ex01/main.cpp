/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:41:20 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/26 14:09:09 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
#include <cmath>

int toFixed(double input) {
	return (round(input * (1 << 8)));
}

double toFloat(int input) {
	return ((double)input / (double)(1 << 8));
}


int main( void ) {

	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout<< "chi haja" << std::endl;
	std::cout << a << std::endl;
	


	return 0;
}