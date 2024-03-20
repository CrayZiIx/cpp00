/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:34:16 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/20 17:58:39 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->index_contact = 0;
	this->index_contact_max = 0;
	return ;
}
Phonebook::~Phonebook()
{
	return ;
}

void Phonebook::add_contact()
{
	std::string entry;

	std::cout<<"FIRST_NAME >";
	std::getline(std::cin, entry);
	while (entry.empty())
	{
		std::cout<<"FIRST_NAME >";
		std::getline(std::cin, entry);
	}
	this->contacts[this->index_contact].set_entry(entry, 0);
	std::cout<<"LAST_NAME >";
	std::getline(std::cin, entry);
	while (entry.empty())
	{
		std::cout<<"LAST_NAME >";
		std::getline(std::cin, entry);
	}
	this->contacts[this->index_contact].set_entry(entry, 1);
	std::cout<<"NICK_NAME >";
	std::getline(std::cin, entry);
	while (entry.empty())
	{
		std::cout<<"NICK_NAME >";
		std::getline(std::cin, entry);
	}
	this->contacts[this->index_contact].set_entry(entry, 2);
	std::cout<<"PHONENUMBER >";
	std::getline(std::cin, entry);
	while (entry.empty())
	{
		std::cout<<"PHONENUMBER >";
		std::getline(std::cin, entry);
	}
	this->contacts[this->index_contact].set_entry(entry, 3);
	std::cout<<"DARKEST_SECRET >";
	std::getline(std::cin, entry);
	while (entry.empty())
	{
		std::cout<<"DARKEST_SECRET >";
		std::getline(std::cin, entry);
	}
	this->contacts[this->index_contact].set_entry(entry, 4);
	
	this->index_contact++;
	if (this->index_contact_max < this->index_contact)
		this->index_contact_max++;
	this->index_contact %= CONTACT_MAX;
}

void Phonebook::search_contact()
{
	std::string input_user;
	std::stringstream str_stream;
	int input_user_int;
	int index_user = 0;
	std::string fname;
	std::string lname;
	std::string nname;


	// print each contact
	std::cout<<"|     index|     fname|     lname|     nname|"<<std::endl;
	std::cout<<"---------------------------------------------"<<std::endl;
	if (this->index_contact_max == 0)
		std::cout<<"NO CONTACT IN THE PHONEBOOK"<<std::endl;
	else
	{

		while (index_user < this->index_contact_max)
		{
			fname = this->contacts[index_user].get_entry(0);
			lname = this->contacts[index_user].get_entry(1);
			nname = this->contacts[index_user].get_entry(2);
			if (fname.length() >=10 )
			{
				fname.resize(9);
				fname.append(".");
			}
			if (lname.length() >=10 )
			{
				lname.resize(9);
				lname.append(".");
			}
			if (nname.length() >=10 )
			{
				nname.resize(9);
				nname.append(".");
			}	
			std::cout<<"|"<<std::right<<std::setw(10)<<index_user;
			std::cout<<"|"<<std::right<<std::setw(10)<<fname;
			std::cout<<"|"<<std::right<<std::setw(10)<<lname;
			std::cout<<"|"<<std::right<<std::setw(10)<<nname<<"|"<<std::endl;
			index_user++;
		}
		std::cout<<"---------------------------------------------"<<std::endl;
		std::cout<<"ENTER INDEX OF CONTACT >";
		std::getline(std::cin, input_user);
		str_stream.str(input_user);
		if (str_stream.fail() == true)
			input_user_int = -1;
		else
			str_stream >> input_user_int;
		std::cout << this->index_contact << std::endl;
		while (str_stream.fail()|| input_user_int < 0 || input_user_int >= this->index_contact_max)
		{
			std::cout<<"RETRY INDEX OF CONTACT >";
			std::getline(std::cin, input_user);
			str_stream.clear();
			str_stream.str(input_user);
			if (str_stream.fail() == true)
				input_user_int = -1;
			else
				str_stream >> input_user_int;
			std::cout << this->index_contact << std::endl;
			std::cout<<input_user_int<<std::endl;
		}
		this->print_contact(this->contacts[input_user_int]);
	}
}

void    Phonebook::print_contact(Contact user)
{
	std::cout<<user.get_entry(0)<<std::endl;
	std::cout<<user.get_entry(1)<<std::endl;
	std::cout<<user.get_entry(2)<<std::endl;
	std::cout<<user.get_entry(3)<<std::endl;
	std::cout<<user.get_entry(4)<<std::endl;
}