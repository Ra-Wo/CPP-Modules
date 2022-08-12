/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:48:17 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/11 13:37:00 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
    #define FRAGTRAP_HPP
    #include "ScavTrap.hpp"

    class FragTrap: virtual public ClapTrap {
        private:
            
        public:
            // Constructors and destructors and operators
            FragTrap();
            FragTrap(std::string name);
            FragTrap( FragTrap const & src );
            virtual ~FragTrap();
            FragTrap & operator=( FragTrap const & obj );
            
            // methods
            virtual void highFivesGuys(void);
    };
    

#endif