/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:28:32 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/14 16:06:47 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
        return ;
}
Contact::~Contact()
{
        return ;
}

void    Contact::set_entry(std::string entry, int entry_id)
{
        if (entry_id == 0)
                this->firstname = entry;
        else if (entry_id == 1)
                this->lastname = entry;
        else if (entry_id == 2)
                this->nickname = entry;
        else if (entry_id == 3)
                this->phonenumber = entry;
        else if (entry_id == 4)
                this->darkestsecret = entry;
        else
                std::cout<<"ERROR"<<std::endl;
}

std::string    Contact::get_entry(int entry_id)
{
         if (entry_id == 0)
                return(this->firstname);
        else if (entry_id == 1)
                return(this->lastname);
        else if (entry_id == 2)
                return(this->nickname);
        else if (entry_id == 3)
                return(this->phonenumber);
        else if (entry_id == 4)
                return(this->darkestsecret);
        else
                return("ERROR");
}
