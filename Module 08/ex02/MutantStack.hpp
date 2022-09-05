/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:01:40 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/05 17:24:25 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<typename T, typename deque = std::deque<T> >
class MutantStack: public std::stack<T> {
    public:
        typedef typename deque::iterator iterator;
        
        iterator begin(void) {
            return this->c.begin();
        }

        iterator end(void) {
            return this->c.end();
        }
};

#endif