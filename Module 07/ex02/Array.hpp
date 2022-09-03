/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:56:09 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/02 12:15:26 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
    
template<typename T> class Array {

    private:
        T* array;
        size_t size;

    public:
        Array() {
            this->array = nullptr;
            this->size = 0;
        }
        
        Array(size_t n) {
            this->size = n;
            if (n < 1) this->array = nullptr;
            else this->array = new T[n];
        }
        
        Array(Array &src) {
            *this = src;
        }
        
        ~Array() {
            if (getSize() >= 1)
                delete [] array; 
        }
        
        // operators
        Array &operator=(Array &src) {
            if (this != &src) {
                delete this->array;
                this->array = new T[src.getSize()];
                for (size_t i = 0; i < src.getSize(); i++) {
                   this->array[i] = src.array[i];
                }
            }
            return *this;
        }

        T &operator[](size_t index) {
            if (index < 0 || index >= this->getSize()) {
                throw OutOfRange();
            };
            return this->getArray()[index];
        }

        // exception
        class OutOfRange : public std::exception {
            const char *what() const throw() {
                return "The element you are tring to access is not exist!";
            }
        };

        //getters
        T* getArray() {
            return this->array;
        }
        const size_t &getSize() const {
            return this->size;
        }
};

#endif
