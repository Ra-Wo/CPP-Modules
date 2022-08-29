/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:38:01 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/29 16:01:21 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

int main() {

    Base *ptr = generate();
    
    identify(*ptr);
    identify(ptr);

    delete ptr;
    return 0;
}