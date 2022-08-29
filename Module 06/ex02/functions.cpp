/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:55:02 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/29 15:59:06 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Header.hpp"

Base::~Base() {
    std::cout << "Base destructor called\n";
}

Base * generate(void) {
    
    srand(time(0));
    switch (rand() % 3)
    {
        case 0:
            return dynamic_cast<Base *>(new A());
            break;
        
        case 1:
            return dynamic_cast<Base *>(new B());
            break;
        
        case 2:
            return dynamic_cast<Base *>(new C());
            break;
    }
    return NULL;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) std::cout << "Type: A\n";
    if (dynamic_cast<B*>(p)) std::cout << "Type: B\n";
    if (dynamic_cast<C*>(p)) std::cout << "Type: C\n";
}

void identify(Base& p) {
    try {
        if (dynamic_cast<A*>(&p)) std::cout << "Type: A\n";
        else throw("error");
    } catch (...) {
        try {
            if (dynamic_cast<B*>(&p)) std::cout << "Type: B\n";
            else throw("error");
        } catch (...) {
            try {
                if (dynamic_cast<C*>(&p)) std::cout << "Type: C\n";
                else throw("error");
            } catch (...) {
                std::cout << "Unknown type!\n";
            }
        }
    } 
}