/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 04:11:55 by sabadri           #+#    #+#             */
/*   Updated: 2025/12/04 03:05:05 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
	PhoneBook phoneBook;
	std::string command;

	std::cout << " Welcome to My Awesome PhoneBook!" << std::endl;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (std::cin.eof()) {
			std::cout << std::endl;
			break;
		}
		if (command == "ADD")
			phoneBook.add_contact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break;
		std::cin.ignore(1, '\n');
	}
	std::cout << "! All contacts lost forever..." << std::endl;
	return 0;
}

