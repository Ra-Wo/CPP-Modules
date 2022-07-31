/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:06:22 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/31 15:07:02 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// default constructor
Point::Point() : x(0), y(0) {
    this->ptrX = (Fixed *)&this->x;
    this->ptrY = (Fixed *)&this->y;
}

// constructor with parameters
Point::Point(float a, float b) : x(a), y(b) {
    this->ptrX = (Fixed *) &this->x;
    this->ptrY = (Fixed *) &this->y;
}

// copy constructor
Point::Point(Point &p): x(p.getX()), y(p.getY()) {
    this->ptrX = (Fixed *) &this->x;
    this->ptrY = (Fixed *) &this->y;
}

// destructor
Point::~Point() {}

// assignment operator
Point &Point::operator=(Point const &obj) {
    if (this != &obj)
    {
        *this->ptrX = obj.getX();
        *this->ptrY = obj.getY();
    }
    return *(this);
}

Fixed const &Point::getX() const {
    return (this->x);
}

Fixed const &Point::getY() const {
    return (this->y);
}