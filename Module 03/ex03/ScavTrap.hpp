/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:50:35 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/11 13:37:13 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
    #define SCAVTRAP_HPP
    #include "ClapTrap.hpp"
    
    class ScavTrap: virtual public ClapTrap {
        private:
            
        public:
            // Constructors and destructors and operators
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap( ScavTrap const & src );
            virtual ~ScavTrap();
            ScavTrap & operator=( ScavTrap const & obj );
            
            // methods
            virtual void guardGate();
            virtual void attack(const std::string& target);
    };

#endif