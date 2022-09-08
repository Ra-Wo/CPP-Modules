/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:07:02 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/08 14:44:09 by roudouch         ###   ########.fr       */
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
        Span();
        Span(int s);
        Span(Span const &src);
        ~Span();
        Span &operator=(Span const &src);
        // methods
        void addNumber(int num);
        void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();

        //exception
        class containerIsFull : public std::exception {
            public:
                containerIsFull();
                virtual ~containerIsFull() _NOEXCEPT;
                containerIsFull(containerIsFull const &src);
                containerIsFull &operator=(containerIsFull const &src);
                virtual const char* what() const _NOEXCEPT;
        };
    
        class NoSpanCanFound : public std::exception {
            public:
                NoSpanCanFound();
                virtual ~NoSpanCanFound() _NOEXCEPT;
                NoSpanCanFound(NoSpanCanFound const &src);
                NoSpanCanFound &operator=(NoSpanCanFound const &src);
                virtual const char* what() const _NOEXCEPT;
        };
    
        class sizeIsNotValide : public std::exception {
            public:
                sizeIsNotValide();
                virtual ~sizeIsNotValide() _NOEXCEPT;
                sizeIsNotValide(sizeIsNotValide const &src);
                sizeIsNotValide &operator=(sizeIsNotValide const &src);
                virtual const char* what() const _NOEXCEPT;
        };

        //getters
        std::vector<int> const &getContainer() const;
        const int &getSize() const;
};

#endif