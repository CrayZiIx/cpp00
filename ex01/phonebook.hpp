/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:11:36 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/14 22:18:34 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int index_contact;
	public:
		Phonebook();
		~Phonebook();
		void add_contact();
                void    print_contact(Contact user);
		Contact search_contact();


		
		
};


#endif