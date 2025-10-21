/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 03:44:20 by sabadri           #+#    #+#             */
/*   Updated: 2025/10/20 13:10:17 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact {
	private :
		std::string Name;
		std::string LastName;
		std::string NickName;
		std::string Number;
		std::string DarkestSecret;
	public :
		void set_name(std::string name)
		{
			Name = name;
		}
		void set_lname(std::string lname)
		{
			LastName = lname;
		}
		void set_nname(std::string nname)
		{
			NickName = nname;
		}
		void set_num(std::string number)
		{
			Number = number;
		}
		void set_dsec(std::string dsecret)
		{
			DarkestSecret = dsecret;
		}
		std::string get_fname() const {
			return Name;
		}
		std::string get_lname() const {
			return LastName;
		}
		std::string get_nname() const {
			return NickName;
		}
		std::string get_num() const {
			return Number;
		}
		std::string get_dsec() const {
			return DarkestSecret;
		}
		void display() const {
			std::cout << "First Name: " << Name << "\n";
			std::cout << "Last Name: " << LastName << "\n";
			std::cout << "Nickname: " << NickName << "\n";
			std::cout << "Phone Number: " << Number << "\n";
			std::cout << "Darkest Secret: " << DarkestSecret << "\n";
		}
};

class PhoneBook {
	private :
		Contact contacts[8];
		int contact_count;
		int index;
	public :
		PhoneBook();
		void add_contact();
		void searchContact();
};

#endif
