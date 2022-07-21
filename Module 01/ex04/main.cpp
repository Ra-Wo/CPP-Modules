/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:41:11 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/20 16:32:47 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <regex>

std::string replaceText(std::string line, std::string textToReplace, std::string text) {
	return std::regex_replace(line, std::regex(textToReplace), text);
}

int main(int ac, char **av)
{
	std::string TextBeforeReaplace;
	std::string nameOfNewFile;

	if (ac < 4)
		return (std::cout << "Less args!\n", 1);
	else if (ac > 4)
		return (std::cout << "More args!\n", 1);

	nameOfNewFile = std::string(av[1]) + ".replace";

	std::ifstream oldFile(av[1]);
	if (!oldFile)
		return (std::cout << "Can't find file to read!\n", 0);

	std::ofstream newFile(nameOfNewFile);
	if (!newFile)
		return (std::cout << "Can't create a new file!\n", 0);

	while (getline(oldFile, TextBeforeReaplace))
		newFile << replaceText(TextBeforeReaplace, av[2], av[3]) << std::endl;

	oldFile.close();
	newFile.close();
	return 0;
}