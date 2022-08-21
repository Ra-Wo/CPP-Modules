/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:31:49 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/21 11:55:47 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    std::cout << "\n***********************************************\n\n";

    int NUMBER_OF_ANIMALS = 6;
    Animal *animal[NUMBER_OF_ANIMALS];

    for (int x = 1; x <= NUMBER_OF_ANIMALS; x++)
    {
        if (x <= NUMBER_OF_ANIMALS / 2)
        {
            std::cout << "--------------------------------" << x << '\n';
            animal[x] = new Cat();
            std::cout << "--------------------------------\n";
        }
        else
        {
            std::cout << "--------------------------------" << x << '\n';
            animal[x] = new Dog();
            std::cout << "--------------------------------\n";
        }
    }

    std::cout << "\n\n******************* animals make sounds **************\n\n";
    animal[4]->makeSound();
    animal[3]->makeSound();
    std::cout << "\n\n******************************************************\n\n";

    // delete all animals
    for (int x = 1; x <= NUMBER_OF_ANIMALS; x++)
    {
        delete animal[x];
    }

    std::cout << "\n\n***********************************************\n\n";
    // check memory leaks
    // system("leaks a.out");

    return 0;
}


// int main () {
//     Animal *unknown = new Animal();
//     return 0;    
// }