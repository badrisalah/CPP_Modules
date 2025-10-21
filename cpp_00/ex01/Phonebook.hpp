/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 03:44:20 by sabadri           #+#    #+#             */
/*   Updated: 2025/10/21 12:28:43 by sabadri          ###   ########.fr       */
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
		void set_name(std::string name);
		void set_lname(std::string lname);
		void set_nname(std::string nname);
		void set_num(std::string number);
		void set_dsec(std::string dsecret);
		std::string get_fname();
		std::string get_lname();
		std::string get_nname();
		std::string get_num();
		std::string get_dsec();
		void display();
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
