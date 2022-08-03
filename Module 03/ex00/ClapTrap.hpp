/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:46:28 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/03 13:04:23 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
    #define CLAPTRAP_HPP
    #include <iostream>

    class ClapTrap {
        private:
            std::string Name;
            unsigned int HitPoints;
            unsigned int energyPoints;
            unsigned int attackDamage;
            
        public:
            // Constructors and destructors and operators
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap( ClapTrap const & src );
            ~ClapTrap();
            ClapTrap & operator=( ClapTrap const & obj );

            // methods
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    };
    
#endif