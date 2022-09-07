/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:36 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/05 13:55:53 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    try {
        
        std::vector<int> vec;
        for (int i = 0; i < 10; i++) {
            vec.push_back(i);
        }
        std::cout << "vector: ";
        for (size_t i = 0; i < vec.size(); i++) {
            std::cout << vec[i] << " - ";
        }
        std::cout << "\nFind in: " << easyfind(vec, 2);

    } catch (std::exception &error) {
        std::cout << error.what() << '\n';
    }
    return 0;
}