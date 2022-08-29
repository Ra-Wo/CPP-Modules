/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:24:58 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/29 14:10:57 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Header.hpp"

int main() {
    
    Data *ptr = new Data;
    ptr->name = "Rasheed Oudouch";
    
    Data *ptr1 = NULL;
    uintptr_t intptr;

    // from  Data* ==to=> uintptr_t
    intptr = serialize(ptr);
    
    // from uintptr_t ==to=> Data*
    ptr1 = deserialize(intptr);

    std::cout << "\n@ " << ptr1->name << " @\n" << '\n';

    return 0;
}