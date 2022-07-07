#include <iostream>

int main(int ac, char **av) {

	int x = 1, y = 0;
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (x < ac) {
		y = 0;
		while (av[x][y])
			std::cout << (char)toupper(av[x][y++]);
		x++;
	}
	std::cout << std::endl;
	return 0;
	
}