/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:56:29 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/02 11:40:00 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

    Array<int> *ptr = new Array<int>(5);

    try {
        
        std::cout << (*ptr)[2] << '\n';
        
    } catch (std::exception &error) {
        std::cout << error.what() << '\n';
    }

    delete ptr;
    
    return 0;
}