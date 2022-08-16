/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:31:49 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/15 19:03:18 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    std::cout << "\n***********************************************\n\n";

    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    const WrongCat* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    
    std::cout << "\n\n***********************************************\n\n";
    return 0;
}

// int main()
// {
//     std::cout << "\n***********************************************\n\n";

//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
    
//     delete meta;
//     delete j;
//     delete i;
    
//     std::cout << "\n\n***********************************************\n\n";
//     return 0;
// }
