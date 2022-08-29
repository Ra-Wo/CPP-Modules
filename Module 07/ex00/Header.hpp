/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:57:02 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/29 17:09:36 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>

template<typename T> void swap(T& var1, T&var2) {
    T backup = var1;
    var1 = var2;
    var2 = backup;
}

template<typename T> T &min(T& var1, T&var2) {
    return (
        (var2 <= var1) ? var2 : var1
    ); 
}

template<typename T> T &max(T& var1, T&var2) {
    return (
        (var2 >= var1) ? var2 : var1
    ); 
}

#endif