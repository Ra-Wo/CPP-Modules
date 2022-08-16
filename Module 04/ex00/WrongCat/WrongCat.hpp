/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:52:03 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/15 19:00:49 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
    #define WRONGCAT_HPP
    #include "../WrongAnimal/WrongAnimal.hpp"

    class WrongCat : public WrongAnimal {
        public:
            WrongCat();
            WrongCat(std::string type);
            WrongCat(WrongCat &obj);
            ~WrongCat();
            WrongCat &operator=(WrongCat const &obj);
        // methods
            void makeSound() const;
    };

#endif