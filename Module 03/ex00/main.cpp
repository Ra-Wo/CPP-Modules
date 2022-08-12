/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:09:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/12 11:04:20 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {


    std::cout << "\n*****************************\n\n";
    
    ClapTrap *clap1 = new ClapTrap("clap1");
    
    clap1->takeDamage(5);
    clap1->beRepaired(10);
    clap1->attack("clap2");

    delete clap1;
    
    std::cout << "\n*****************************\n";
    return 0;
}