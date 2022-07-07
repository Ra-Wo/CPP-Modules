/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roudouch <roudouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:00:28 by roudouch          #+#    #+#             */
/*   Updated: 2022/07/07 11:50:57 by roudouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP
	
	// header file
	#include <iostream>
	
	// shortcuts
	#define string std::string
	
	
	class Contact {
		private:
			// Varibles
			string first_name;
			string last_name;
			string nickname;
			string phone_number;
			string darket_secret;
		
		public:
			// Default constructor
			Contact() {}
			
			// Parameterized constructor
			Contact(
				string firstName,
				string lastName,
				string nickname,
				string phoneNumber, 
				string darketSecret
			) {
				this->first_name	= firstName;
				this->last_name 	= lastName;
				this->nickname		= nickname;
				this->phone_number	= phoneNumber;
				this->darket_secret = darketSecret;
			}

			string makeTextShorter(string text) {
				if (text.length() > 10) { return text.substr(0, 9) + '.'; }
				else if (text.length() == 10) { return text; }
				else { return string(10 - text.length(), ' ') + text; }
			}
			
			string getContact () {
				return
					this->makeTextShorter(this->first_name) 	+ " | " +
					this->makeTextShorter(this->last_name) 		+ " | " +
					this->makeTextShorter(this->nickname) 		+ " | " +
					this->makeTextShorter(this->phone_number) 	+ " | " +
					this->makeTextShorter(this->darket_secret);
			}
	};
	
	class PhoneBook {
		private:
			// Varibles
			Contact contacts[8];
			int	index;
			int sizeOfContact;
			
		public:
			// Default constructor
			PhoneBook() {
				this->index = 0;
				sizeOfContact = 0;
			}

			// Methods
			void addContact() {
				string data[5], titles[5] = {
					"First Name:", "Last Name:", "Nickname:",
					"Phone Number:", "Darket Secret:"
				};

				for (int i = 0; i < 5; i++) {
					std::cout << titles[i] << ' ';
					std::getline(std::cin, data[i]);
					if (data[i] == "") i--;
				}

				Contact contact(data[0], data[1], data[2], data[3], data[4]);
				if (this->sizeOfContact < 8) this->sizeOfContact++;
				if (this->index == 8) this->index = 0;
				this->contacts[index] = contact;
				this->index++;
			}
			
			void search() {
				string	indexOftheContactToShow;
				int 	index;

				std::cout << "     Index | First name |  Last name |   Nikename | Phone Num. | Dark Secr. \n";
				for (int x = 0; this->sizeOfContact > x; x++) {
					std::cout << "         " << x << " | " << this->contacts[x].getContact() << '\n';
				}
				std::cout << "Index: ";
				std::getline(std::cin, indexOftheContactToShow);
				index = checkIndex(indexOftheContactToShow);
				if (index != -1)
					std::cout << this->contacts[index].getContact() << '\n';
				else std::cout << "\n[ No contact with this index ]\n";
			}

			int checkIndex(string indexOftheContactToShow) {
				int index;

				try {
					index = std::stoi(indexOftheContactToShow);
				} catch(...) {
					return -1;
				}
				if (index >= 0 && index <= 7 && this->sizeOfContact >= index + 1) // error
					return (index);
				else return -1;
			}
	};

#endif