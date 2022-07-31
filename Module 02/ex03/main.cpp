/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:41:20 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/31 15:07:49 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

int main( void ) {

	Point A(1, 1);
	Point B(4, 2);
	Point C(2, 7);
	Point P(2, 3);
	
	// P = A;
	// std::cout << P.getX().toFloat() << " " << P.getY().toFloat() << std::endl;	

	bool isPointInTriangle = bsp(A, B, C, P);
	std::cout << "isPointInTriangle: " << isPointInTriangle << std::endl;
	
	return 0;
}
