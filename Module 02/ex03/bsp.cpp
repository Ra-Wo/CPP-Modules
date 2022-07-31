/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:08:43 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/31 15:39:58 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float get_area_triangle(Point const &a, Point const &b, Point const &c) {

  	float result =   (
        (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) +
        (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) +
        (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
    ) / 2;
  	if (result < 0) result *= -1;
	return result;
}

static bool isPointInTriangle(Point const &a, Point const &b, Point const &c, Point const &point) {
  
	float triangle1 = get_area_triangle(a,b,point);
	float triangle2 = get_area_triangle(a,point,c);
	float triangle3 = get_area_triangle(point,b,c);
	float totalArea = get_area_triangle(a,b,c);
    
  	return (
        (triangle1 + triangle2 + triangle3) > totalArea ||
        triangle1 == 0 || triangle2 == 0 || triangle3 == 0 ?
        (
            false
        ):(
            true
        )
    );
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    
    return isPointInTriangle(a, b, c, point);
}