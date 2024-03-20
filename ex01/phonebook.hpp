/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:11:36 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/20 17:49:20 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "contact.hpp"

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