/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:39:23 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/15 19:01:16 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
    #define WRONGANIMAL_HPP
    #include <iostream>
    
    class WrongAnimal {
        protected:
            std::string _type;
        
        public:
            WrongAnimal();
            WrongAnimal(std::string type);
            WrongAnimal(WrongAnimal &obj);
            virtual ~WrongAnimal();
            WrongAnimal &operator=(WrongAnimal const &obj);
            
            // method
            virtual void makeSound() const;
            // getter
            std::string getType() const;
            
    };

#endif