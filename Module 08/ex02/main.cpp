/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:01:26 by roudouch          #+#    #+#             */
/*   Updated: 2022/09/08 15:58:43 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

int main() {

    MutantStack<int> myStack;

    myStack.push(60);
    myStack.push(10);
    myStack.push(99);

    MutantStack<int> newStack(myStack);

    MutantStack<int>::iterator it = newStack.begin();
    MutantStack<int>::iterator ite = newStack.end();

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}

//#include <list>
//int main()
//{
//    MutantStack<int> mstack;
    
//    mstack.push(5);
//    mstack.push(17);
    
//    std::cout << mstack.top() << std::endl;
    
//    mstack.pop();
    
//    std::cout << mstack.size() << std::endl;

//    mstack.push(3);
//    mstack.push(5);
//    mstack.push(737);
//    mstack.push(0);
    
//    MutantStack<int>::iterator it = mstack.begin();
//    MutantStack<int>::iterator ite = mstack.end();
    
//    ++it;
//    --it;
//    while (it != ite)
//    {
//        std::cout << *it << std::endl;
//        ++it;
//    }
//    std::stack<int> s(mstack);

//    std::cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

//    std::list<int> lll;
    
//    lll.push_back(5);
//    lll.push_back(17);
    
//    std::cout << lll.back() << std::endl;
    
//    lll.pop_back();
    
//    std::cout << lll.size() << std::endl;

//    lll.push_back(3);
//    lll.push_back(5);
//    lll.push_back(737);
//    lll.push_back(0);
    
//    std::list<int>::iterator list_it = lll.begin();
//    std::list<int>::iterator list_ite = lll.end();
    
//    ++list_it;
//    --list_it;
//    while (list_it != list_ite)
//    {
//        std::cout << *list_it << std::endl;
//        ++list_it;
//    }
//    std::list<int> list_s(lll);

    
//    return 0;
//}


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