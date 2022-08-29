/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:49:30 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/29 13:54:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

uintptr_t serialize(Data *ptr) {
    return (
        reinterpret_cast<uintptr_t>(ptr)
    );
}

Data* deserialize(uintptr_t raw) {
    return (
        reinterpret_cast<Data *>(raw)
    );
}