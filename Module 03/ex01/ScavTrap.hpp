/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:50:35 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/09 11:44:44 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
    #define SCAVTRAP_HPP
    #include <iostream>
    #include "ClapTrap.hpp"
    
    class ScavTrap: public ClapTrap {
        private:
            
        public:
            // Constructors and destructors and operators
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap( ScavTrap const & src );
            ~ScavTrap();
            ScavTrap & operator=( ScavTrap const & obj );
            
            // methods
            void attack(const std::string& target);
            void guardGate();
    };

#endif