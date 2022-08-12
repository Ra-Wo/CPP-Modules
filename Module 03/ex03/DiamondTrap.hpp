/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:27:02 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/11 14:15:16 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
    #define DIAMONDTRAP_HPP
    #include "FragTrap.hpp"

    class DiamondTrap: public FragTrap, public ScavTrap {
        private:
            std::string Name;
        public:
            // Constructors and destructors and operators
            DiamondTrap();
            DiamondTrap(std::string name);
            DiamondTrap( DiamondTrap const & src );
            ~DiamondTrap();
            DiamondTrap & operator=( DiamondTrap const & obj );
            // methods
            void attack(const std::string &target);
            void whoAmI();
    };



#endif