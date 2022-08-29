/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:34:13 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/29 15:50:42 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>


class Base {
    public:
        virtual ~Base();
};

class A: public Base {
   
};

class B: public Base {
    
};

class C: public Base {
    
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif