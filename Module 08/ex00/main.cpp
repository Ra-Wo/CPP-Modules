/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:36 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/08 12:56:10 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }
    std::cout << "vector: ";
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " - ";
    }

    int result = easyfind(vec, 5);
    
    if (result == -1) {
        std::cout << "\nCan't find the element" << std::endl;
    } else {
        std::cout << "\nFind in: " << result;
    }

    return 0;
}