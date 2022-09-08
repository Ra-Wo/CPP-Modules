/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:36:18 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/08 13:59:13 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): size(0) {}

Span::~Span() {}

Span::Span(Span const &src) {
    *this = src;
}

Span::Span(int s) {
    if (s < 0) throw Span::sizeIsNotValide();
    size = s; container.reserve(size);
}

Span &Span::operator=(Span const &src) {
    if (this != &src) {
        this->size = src.getSize();
        this->container.resize(this->size);
        for (int i = 0; i < this->size; i++) {
            this->container[i] = src.getContainer()[i];
        }
    }
    return *this;
}

//// methods
void Span::addNumber(int num) {
    (static_cast<int>(container.size()) == size) ? (
        throw Span::containerIsFull()
    ) : (
        container.push_back(num)
    );
}

int Span::shortestSpan() {
    if (container.size() < 1) throw Span::NoSpanCanFound();
    
    int shortest = -1;
    std::sort(container.begin(), container.end());
    for (size_t i = 0; i < container.size(); i++) {
        int dist = abs(container[i] - container[i - 1]);
        if (dist < shortest || shortest == -1) shortest = dist;
    }        
    return shortest;
}

int Span::longestSpan() {
    if (container.size() < 1) throw Span::NoSpanCanFound();
    
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

//exceptions

Span::containerIsFull::containerIsFull() {}
Span::containerIsFull::~containerIsFull() _NOEXCEPT {}
Span::containerIsFull::containerIsFull(containerIsFull const &src) {
    *this = src;
}
Span::containerIsFull &Span::containerIsFull::operator=(containerIsFull const &src) {
    (void)src;
    return *this;
}
const char* Span::containerIsFull::what() const _NOEXCEPT {
    return "Container is Full!";          
}

Span::NoSpanCanFound::NoSpanCanFound() {}
Span::NoSpanCanFound::~NoSpanCanFound() _NOEXCEPT {}
Span::NoSpanCanFound::NoSpanCanFound(NoSpanCanFound const &src) {
    *this = src;
}
Span::NoSpanCanFound &Span::NoSpanCanFound::operator=(NoSpanCanFound const &src) {
    (void)src;
    return *this;
}
const char* Span::NoSpanCanFound::what() const _NOEXCEPT {
    return "No Span Can found!";          
}

Span::sizeIsNotValide::sizeIsNotValide() {}
Span::sizeIsNotValide::~sizeIsNotValide() _NOEXCEPT {}
Span::sizeIsNotValide::sizeIsNotValide(sizeIsNotValide const &src) {
    *this = src;   
}
Span::sizeIsNotValide &Span::sizeIsNotValide::operator=(sizeIsNotValide const &src) {
    (void)src;
    return *this;
}
const char* Span::sizeIsNotValide::what() const _NOEXCEPT {
    return "The size is not valid!";          
}