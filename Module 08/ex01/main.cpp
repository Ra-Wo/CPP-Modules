/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:43:36 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/08 15:28:13 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try {
        std::vector<int> a;
        a.push_back(40);
        a.push_back(2);
        a.push_back(3);
        a.push_back(-1);

        Span b(6);
        
        b.addNumber(999);
        b.addNumbers(a.begin(), a.end());
        b.addNumber(999);
        
        for (int i = 0; i < b.getSize(); i++) {
            std::cout << b.getContainer()[i] << "\n";
        }
                
    } catch (std::exception &Err) {
        std::cout << Err.what() << '\n';
    }
    return 0;
}

//int main()
//{
//    try {

//        Span sp = Span(5);
        
//        sp.addNumber(6);
//        sp.addNumber(3);
//        sp.addNumber(17);
//        sp.addNumber(9);
//        sp.addNumber(11);

//        std::cout << sp.shortestSpan() << std::endl;
//        std::cout << sp.longestSpan() << std::endl;
                
//    } catch (std::exception &Err) {
//        std::cout << Err.what() << '\n';
//    }
//    return 0;
//}

//int main()
//{
//    try {

//        Span sp = Span(5);
//        sp.addNumber(6);
//        sp.addNumber(3);
//        sp.addNumber(17);
//        sp.addNumber(9);
//        sp.addNumber(11);

//        Span sp1 = Span();

//        sp1 = sp;

//        std::cout << sp1.shortestSpan() << std::endl;
//        std::cout << sp1.longestSpan() << std::endl;
                
//    } catch (std::exception &Err) {
//        std::cout << Err.what() << '\n';
//    }
//    return 0;
//}