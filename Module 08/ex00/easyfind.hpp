/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:31 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/08 12:52:24 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

template<typename T>
    int easyfind(T &container, int toFind) {
        std::vector<int>::iterator it;

        it = std::find(container.begin(), container.end(), toFind);
        if (it == container.end()) return -1;
        return it - container.begin();
    }

#endif