/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:31:49 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/21 13:40:31 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    std::cout << "\n***********************************************\n\n";
    Animal *j = new Dog();
    Animal *i = new Dog();

    
    *j = *i;


    delete j; // should not create a leak
    delete i;
    std::cout << "\n***********************************************\n\n";

    // check leaks
    // system("leaks a.out");

    return 0;
}
// {
//     std::cout << "\n***********************************************\n\n";
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();
//     delete j; // should not create a leak
//     delete i;
//     std::cout << "\n***********************************************\n\n";

//     // check leaks
//     // system("leaks a.out");

//     return 0;
// }

// int main()
// {
//     std::cout << "\n***********************************************\n\n";

//     int NUMBER_OF_ANIMALS = 6;
//     Animal *animal[NUMBER_OF_ANIMALS];

//     for (int x = 1; x <= NUMBER_OF_ANIMALS; x++)
//     {
//         if (x <= NUMBER_OF_ANIMALS / 2)
//         {
//             std::cout << "--------------------------------" << x << '\n';
//             animal[x] = new Cat();
//             std::cout << "--------------------------------\n";
//         }
//         else
//         {
//             std::cout << "--------------------------------" << x << '\n';
//             animal[x] = new Dog();
//             std::cout << "--------------------------------\n";
//         }
//     }

//     // delete all animals
//     for (int x = 1; x <= NUMBER_OF_ANIMALS; x++)
//     {
//         delete animal[x];
//     }

//     std::cout << "\n\n***********************************************\n\n";
//     // check memory leaks
//     // system("leaks a.out");

//     return 0;
// }
