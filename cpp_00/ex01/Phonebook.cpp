/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:28:54 by sabadri           #+#    #+#             */
/*   Updated: 2025/10/21 12:33:56 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contact_count(0), index(0) {}

void Contact::set_name(std::string name)
{
	Name = name;
}
void Contact::set_lname(std::string lname)
{
	LastName = lname;
}
void Contact::set_nname(std::string nname)
{
	NickName = nname;
}
void Contact::set_num(std::string number)
{
	Number = number;
}
void Contact::set_dsec(std::string dsecret)
{
	DarkestSecret = dsecret;
}
std::string Contact::get_fname()  {
	return Name;
}
std::string Contact::get_lname()  {
	return LastName;
}
std::string Contact::get_nname()  {
	return NickName;
}
std::string Contact::get_num()  {
	return Number;
}
std::string Contact::get_dsec()  {
	return DarkestSecret;
}
void Contact::display(){
	std::cout << "First Name: " << Name << "\n";
	std::cout << "Last Name: " << LastName << "\n";
	std::cout << "Nickname: " << NickName << "\n";
	std::cout << "Phone Number: " << Number << "\n";
	std::cout << "Darkest Secret: " << DarkestSecret << "\n";
}
std::string trunc(std::string s)
{
	if (s.size()<11)
		return s;
	std::string res = "          ";
	for(int i=0;i<9;i++)
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
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
        std::cout << "Enter Last Name : ";
        std::getline(std::cin, lname);
        if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		std::cout << "Enter NickName : ";
        std::getline(std::cin, nname);
        if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		std::cout << "Enter Number : ";
        std::getline(std::cin, num);
        if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		std::cout << "Enter Darkest Secret : ";
        std::getline(std::cin, dsec);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
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
