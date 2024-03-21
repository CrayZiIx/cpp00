/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:11:36 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/21 11:59:43 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Contact.hpp"

#ifndef CONTACT_MAX
# define CONTACT_MAX 8
#endif

class Phonebook
{
	private:
		Contact contacts[CONTACT_MAX];
		int index_contact;
		int index_contact_max;
	public:
		Phonebook();
		~Phonebook();
		void	add_contact();
		void    print_contact(Contact user);
		void	search_contact();	
};


#endif