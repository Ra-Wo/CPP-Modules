#include "phonebook.hpp"

int main() {
	PhoneBook phoneBook;

	string cmd;
	while (true) {
		std::cout << "PhoneBook: ";
		std::getline(std::cin, cmd);

		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD") {
			phoneBook.addContact();
		}
		else if (cmd == "SEARCH") {
			phoneBook.search();
		}
		std::cout << '\n';
	}

	return 0;
}