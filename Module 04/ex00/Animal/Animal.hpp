/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:39:23 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/14 11:15:31 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
    #define ANIMAL_HPP
    #include <iostream>
    
    class Animal {
        protected:
            std::string _type;
        
        public:
            Animal();
            Animal(std::string type);
            Animal(Animal &obj);
            virtual ~Animal();
            Animal &operator=(Animal const &obj);
            
            // method
            virtual void makeSound() const;
            // getter
            std::string getType() const;
            
    };

#endif