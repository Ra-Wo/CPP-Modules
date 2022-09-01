/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:15:58 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/01 15:33:05 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {


    int arr[] = {0, 8, 8, 9, 6, 3, 22};
    char arr1[] = "hello ?";
    int len = 7;
    
    std::cout << "\n*********** before ***********\n\n";
    
    for (int i = 0; i < 7; i++) {
        std::cout << arr[i] << (i < 6? " - " : "\n");
    }
    
    for (int i = 0; i < 7; i++) {
        std::cout << arr1[i] << (i < 6? " - " : "\n");
    }
    
    std::cout << "\n********* after **************\n\n";
    
    iter(arr, len, &funcToRun);
    for (int i = 0; i < 7; i++) {
        std::cout << arr[i] << (i < 6? " - " : "\n");
    }
    
    iter(arr1, len, &funcToRun);
    for (int i = 0; i < 7; i++) {
        std::cout << arr1[i] << (i < 6? " - " : "\n");
    }
    std::cout << "\n********** end ***************\n\n";
    
    return 0;
}
