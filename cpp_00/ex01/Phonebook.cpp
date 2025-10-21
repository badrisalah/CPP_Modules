/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:28:54 by sabadri           #+#    #+#             */
/*   Updated: 2025/10/21 11:11:48 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contact_count(0), index(0) {}

std::string trunc(std::string s)
{
	if (s.size()<11)
		return s;
	std::string res = "          ";
	for(int i=0;i<10;i++)
	{
		res[i] = s[i];
	}
	std::string p = ".";
	res += p;
	return res;
}

void PhoneBook::add_contact()
{
    std::string fname, lname, nname, num, dsec;

    while (true)
    {
        std::cout << "Enter First Name : ";
        std::getline(std::cin, fname);
        std::cout << "Enter Last Name : ";
        std::getline(std::cin, lname);
        std::cout << "Enter NickName : ";
        std::getline(std::cin, nname);
        std::cout << "Enter Number : ";
        std::getline(std::cin, num);
        std::cout << "Enter Darkest Secret : ";
        std::getline(std::cin, dsec);
		fname = trunc(fname);
		lname = trunc(lname);
		nname = trunc(nname);
		num = trunc(num);
        if (!fname.empty() && !lname.empty() && !nname.empty() && !num.empty() && !dsec.empty())
            break;
        std::cout << "No field should be empty. Please try again.\n";
    }
    contacts[index].set_name(fname);
    contacts[index].set_lname(lname);
    contacts[index].set_nname(nname);
    contacts[index].set_num(num);
    contacts[index].set_dsec(dsec);
    if (contact_count < 8)
        contact_count++;
    index = (index + 1) % 8;
    std::cout <<"\n Contact added successfully!\n";
}

void PhoneBook::searchContact()
{
	if (index == 0)
	{
		std::cout<<"Empty contact \n";
		return ;
	}
	else
	{
		for(int i=0;i<index;i++)
		{
			std::cout<<std::setw(10)<<i<<"|";
			std::cout<<std::setw(10)<<contacts[i].get_fname()<<"|";
			std::cout<<std::setw(10)<<contacts[i].get_lname()<<"|";
			std::cout<<std::setw(10)<<contacts[i].get_nname()<<"|";
			std::cout<<"\n";
		}
		std::cout<<"Enter wich index you'd like to view\n";
		int x=0;
		std::cin>>x;
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		if (x <= index)
		{
			std::cout<<std::setw(10)<<x<<"|";
			std::cout<<std::setw(10)<<contacts[x].get_fname()<<"|";
			std::cout<<std::setw(10)<<contacts[x].get_lname()<<"|";
			std::cout<<std::setw(10)<<contacts[x].get_nname()<<"|";
			std::cout<<"\n";		
		}
		else
		{
			std::cout<<"index must be in range\n";
			return ;
		}
	}
}
