/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:46:28 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/10 15:54:00 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
    #define CLAPTRAP_HPP
    #include <iostream>

    class ClapTrap {
        protected:
            std::string Name;
            unsigned int HitPoints;
            unsigned int energyPoints;
            unsigned int attackDamage;
            
        public:
            // Constructors and destructors and operators
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap( ClapTrap const & src );
            virtual ~ClapTrap();
            virtual ClapTrap & operator=( ClapTrap const & obj );

            // methods
            virtual void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    };
    
#endif