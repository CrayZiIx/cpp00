/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:11:24 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/20 20:47:25 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
        Phonebook my_phonebook;
        std::string     entry;
        
        while (1)
        {
                std::cout<<"---------------------------------------------"<<std::endl;
	        std::cout<<"|                 PHONEBOOK                 |"<<std::endl;
	        std::cout<<"---------------------------------------------"<<std::endl;
	        std::cout<<"|    ADD     -     SEARCH     -     EXIT    |"<<std::endl;
	        std::cout<<"---------------------------------------------"<<std::endl;
                std::cout<<"command> ";
                std::getline(std::cin, entry);
                std::cout<<entry<<std::endl;
                if (entry.compare("EXIT") == 0)
                        break ;
                else if (entry.compare("ADD") == 0)
                        my_phonebook.add_contact();
                else if(entry.compare("SEARCH") == 0)
                        my_phonebook.search_contact();
        }
}