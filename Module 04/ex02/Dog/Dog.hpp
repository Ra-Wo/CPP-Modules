/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:49:43 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/19 18:47:31 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
    #define DOG_HPP
    #include "../Animal/Animal.hpp"

    class Dog : public Animal {
        private:
            Brain *_brain;
            
        public:
            Dog();
            Dog(std::string name);
            Dog(Dog &obj);
            ~Dog();
            Dog &operator=(Dog const &obj);
        // methods
            void makeSound() const;
    };

#endif
