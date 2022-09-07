/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:07:02 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/04 16:25:35 by roudouch         ###   ########.fr       */
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
    
    Span(int s) {
        if (s < 0) throw sizeIsNotValide();
        size = s; container.reserve(size);
    }
    // methods
    void addNumber(int num) {
        (static_cast<int>(container.size()) == size) ? (
            throw containerIsFull()
        ) : (
            container.push_back(num)
        );
    }
    
    int shortestSpan() {
        if (container.size() < 1) throw NoSpanCanFound();
        
        int shortest = -1;
        std::sort(container.begin(), container.end());
        for (size_t i = 0; i < container.size(); i++) {
            int dist = abs(container[i] - container[i - 1]);
            if (dist < shortest || shortest == -1) shortest = dist;
        }        
        return shortest;
    }

    int longestSpan() {
        if (container.size() < 1) throw NoSpanCanFound();
        
        std::sort(container.begin(), container.end());
        return (*--container.end()) - (*container.begin());
    }

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
    std::vector<int> const &getContainer() const {
        return container;
    }
    
    const int &getSize() const {
        return size;
    }
    
};

#endif