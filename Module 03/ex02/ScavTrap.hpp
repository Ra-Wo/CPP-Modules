/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:50:35 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/08 15:51:46 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
    #define SCAVTRAP_HPP
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
            void guardGate();
            void attack(const std::string& target);
    };

#endif