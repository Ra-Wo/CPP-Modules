/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:40:51 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/21 13:07:48 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &src) {
    std::cout << "Brain copied" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
    std::cout << "Brain assigned" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return (*this);
}
