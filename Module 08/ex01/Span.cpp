/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:36:18 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/07 14:39:40 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int s) {
    if (s < 0) throw sizeIsNotValide();
    size = s; container.reserve(size);
}

//// methods
void Span::addNumber(int num) {
    (static_cast<int>(container.size()) == size) ? (
        throw containerIsFull()
    ) : (
        container.push_back(num)
    );
}

int Span::shortestSpan() {
    if (container.size() < 1) throw NoSpanCanFound();
    
    int shortest = -1;
    std::sort(container.begin(), container.end());
    for (size_t i = 0; i < container.size(); i++) {
        int dist = abs(container[i] - container[i - 1]);
        if (dist < shortest || shortest == -1) shortest = dist;
    }        
    return shortest;
}

int Span::longestSpan() {
    if (container.size() < 1) throw NoSpanCanFound();
    
    std::sort(container.begin(), container.end());
    return (*--container.end()) - (*container.begin());
}

//getters
std::vector<int> const &Span::getContainer() const {
    return container;
}

const int &Span::getSize() const {
    return size;
}