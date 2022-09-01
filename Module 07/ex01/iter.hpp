/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:16:19 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/01 15:47:48 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
    
template<typename T>
    void iter(T* array, int length, void (*func)(T &element)) {
        for (int i = 0; i < length; i++) {
            func(array[i]);
        }
    }

template<typename T>
    void funcToRun(T &e) {
        e++;
    }

#endif