/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:11:16 by roudouch          #+#    #+#             */
/*   Updated: 2022/08/31 16:02:32 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

bool check_is_pseudo_literal(std::string str)
{
    return (
        str == "-inff" || str == "+inff" || str == "+inf"  ||
        str == "-inf"  || str == "nanf"  || str == "nan" ||
        str == "inff"  || str == "inf" 
    );
}

void printChar(float num)
{
    if (num >= 33 && num <= 126)
        std::cout << "char: '" << static_cast<char>(num) << "'\n";
    else std::cout << "char: Non displayable\n";
}

void printInt(float num) {
    std::cout << "int: " << static_cast<int>(num) << "\n";
}

void printFloat(float num) {
    std::cout   << "float: " << num
                << ((num - static_cast<int>(num) == 0)? ".0f\n" : "f\n");
}

void printDouble(float num) {
    std::cout   << "double: " << static_cast<double>(num) 
                << ((num - static_cast<int>(num) == 0)? ".0\n" : "\n");
}

void printAllTypes(std::string str)
{
    float num;
    if (!isdigit(str[0])) {
        num = static_cast<float>(str[0]);
    } else 
        num = stof(str);
    printChar(num);
    printInt(num);
    printFloat(num);
    printDouble(num);
}

void printAllTypesForPseudoLiterals(std::string str)
{
    std::string ForFloat[4] = {"-inff", "+inff", "inff", "nanf"};
    std::string ForDouble[4] = {"-inf", "+inf", "inf", "nan"};

    for (int i = 0; i < 3; i++)
    {
        if (ForDouble[i] == str || ForFloat[i] == str)
        {
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: " << ForFloat[i] << '\n';
            std::cout << "double: " << ForDouble[i] << '\n';
            break;
        }
    }
}

void checkArgIsValid(std::string str) {
    
    if (!isdigit(str[0]) && str.length() > 1)
        throw("\n❌: Wrong argument!\n");
}

int main(int ac, char **av)
{
    try
    {
        if (ac != 2) throw("\n❌: Wrong argument!\n");
        if (check_is_pseudo_literal(av[1])) printAllTypesForPseudoLiterals(av[1]);
        else (checkArgIsValid(av[1]), printAllTypes(av[1]));
    }
    catch (char const *error)
    {
        std::cout << error << '\n';
    }
    catch (...)
    {
        std::cout << "\n❌: Wrong input!\n";
    }
    return 0;
}   