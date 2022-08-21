/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:52:03 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/19 18:47:20 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
    #define CAT_HPP
    #include "../Animal/Animal.hpp"

    class Cat : public Animal {
        private:
            Brain *_brain;
            
        public:
            Cat();
            Cat(std::string type);
            Cat(Cat &obj);
            ~Cat();
            Cat &operator=(Cat const &obj);
        // methods
            void makeSound() const;
    };

#endif