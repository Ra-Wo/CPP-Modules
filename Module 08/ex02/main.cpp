/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:01:26 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/05 17:25:01 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);
    return 0;
}



// int main() {
    
//     MutantStack<int> myStack;
    
//     myStack.push(60);
//     myStack.push(9);
//     myStack.push(10);
//     myStack.push(99);

//     while (!myStack.empty()) {
//         std::cout << myStack.top() << " ";
//         myStack.pop();
//     }


//     return 0;
// }