/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:34:16 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/18 15:21:42 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->index_contact = 0;
	return ;
}
Phonebook::~Phonebook()
{
	return ;
}

void Phonebook::add_contact()
{
	std::string entry;

	// std::cin.ignore();
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
}

Contact Phonebook::search_contact()
{
	// int integer_index_contact = 0;        
	std::string input_user;
	std::stringstream str_stream;
	int input_user_int;

		
	// print each contact
	// print number of max index and min index
	// std::cin.ignore();
	std::cout<<"ENTER INDEX OF CONTACT >";
	std::getline(std::cin, input_user);
	str_stream.str(input_user);
	if (str_stream.fail() == true)
		input_user_int = -1;
	else
		str_stream >> input_user_int;
	std::cout << this->index_contact << std::endl;
	while (str_stream.fail()|| input_user_int > 7 || input_user_int < 0 || input_user_int > this->index_contact)
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
	}
	std::cout<<input_user_int<<std::endl;
	return (this->contacts[input_user_int]);
}

void    Phonebook::print_contact(Contact user)
{
	std::cout<<user.get_entry(0)<<std::endl;
	std::cout<<user.get_entry(1)<<std::endl;
	std::cout<<user.get_entry(2)<<std::endl;
	std::cout<<user.get_entry(3)<<std::endl;
	std::cout<<user.get_entry(4)<<std::endl;
}