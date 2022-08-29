/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:25:02 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/29 13:53:02 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>

    struct Data {
        std::string name;
    };
    
    uintptr_t serialize(Data *ptr);
    Data* deserialize(uintptr_t raw);

#endif