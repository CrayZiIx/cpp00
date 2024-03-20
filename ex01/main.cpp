/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:11:24 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/20 15:32:57 by jolecomt         ###   ########.fr       */
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
                std::cout<<"ADD | SEARCH | EXIT >";
                std::getline(std::cin, entry);
                std::cout<<entry<<std::endl;
                if (entry.compare("EXIT") == 0)
                        break ;
                else if (entry.compare("ADD") == 0)
                        my_phonebook.add_contact();
                else if(entry.compare("SEARCH") == 0)
                        my_phonebook.search_contact();
        }
         // c1.set_name("first", 0);        
        // c1.set_name("last", 1);        
        // c1.set_name("nick", 2);
        // std::cout<<c1.get_name(0)<<std::endl;
        // std::cout<<c1.get_name(1)<<std::endl;
        // std::cout<<c1.get_name(2)<<std::endl;
}