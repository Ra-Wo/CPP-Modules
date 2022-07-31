/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:03:52 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/31 15:06:51 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
	#define POINT_HPP
	#include "Fixed.hpp"
	
	class Point {
		private :
		
			Fixed const x;
			Fixed const y;
			Fixed *ptrX;
			Fixed *ptrY;

		public :
			
			Point();
			Point(float, float);
			Point(Point &);
			Point &operator=(Point const &);
			~Point();
			Fixed const &getX() const;
			Fixed const &getY() const;
	};

	// functions
	bool bsp( Point const a, Point const b, Point const c, Point const point);
	
#endif