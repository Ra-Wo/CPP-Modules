/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:48:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/08 18:23:28 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
    #define FRAGTRAP_HPP
    #include "ScavTrap.hpp"

    class FragTrap: public ClapTrap {
        private:
            
        public:
            // Constructors and destructors and operators
            FragTrap();
            FragTrap(std::string name);
            FragTrap( FragTrap const & src );
            ~FragTrap();
            FragTrap & operator=( FragTrap const & obj );
            
            // methods
            void highFivesGuys(void);
    };
    

#endif