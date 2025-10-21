/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:28:54 by sabadri           #+#    #+#             */
/*   Updated: 2025/10/21 14:42:23 by sabadri          ###   ########.fr       */
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

int numcheck(std::string s)
{
	size_t j = s.size();
	for(size_t i=0;i<j;i++)
	{
		if (s[i] > '9' || s[i] < '1')
			return 1;
	}
	return 0;
}

int prntcheck(std::string const& fn, std::string const& ln, std::string const& nn, std::string const& ds)
{
	for(size_t i = 0;i<fn.size();i++)
	{
		if (fn[i] < 32 || fn[i] > 126)
			return 0;
	}
	for(size_t i = 0;i<ln.size();i++)
	{
		if (ln[i] < 32 || ln[i] > 126)
			return 0;
	}
	for(size_t i = 0;i<nn.size();i++)
	{
		if (nn[i] < 32 || nn[i] > 126)
			return 0;
	}
	for(size_t i = 0;i<ds.size();i++)
	{
		if (ds[i] < 32 || ds[i] > 126)
			return 0;
	}
	return 1;
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
        if (!fname.empty() && !lname.empty() && !nname.empty() &&
            !num.empty() && !dsec.empty() &&
            !numcheck(num) && prntcheck(fname,lname,nname,dsec))
        {
            break;
        }
        std::cout << "Input Error\n";
    }
	
    contacts[index].set_name(trunc(fname));
    contacts[index].set_lname(trunc(lname));
    contacts[index].set_nname(trunc(nname));
    contacts[index].set_num(trunc(num));
    contacts[index].set_dsec(trunc(dsec));
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
		std::cout<<"  index   |first name| last name| nickname |"<<std::endl;
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
