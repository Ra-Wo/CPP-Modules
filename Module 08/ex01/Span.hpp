/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:07:02 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/07 14:39:14 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

#include <cstdlib>

class Span {
    private:
        std::vector<int> container;
        int size;
    public:
        Span(int s);
        // methods
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();

        //exception
        class containerIsFull : public std::exception {
            virtual const char* what() const _NOEXCEPT{
                return "Container is Full!";          
            }
        };
    
        class NoSpanCanFound : public std::exception {
            virtual const char* what() const _NOEXCEPT{
                return "No Span Can found!";          
            }
        };
    
        class sizeIsNotValide : public std::exception {
            virtual const char* what() const _NOEXCEPT{
                return "The size is not valid!";          
            }
        };

        //getters
        std::vector<int> const &getContainer() const;
        const int &getSize() const;
};

#endif