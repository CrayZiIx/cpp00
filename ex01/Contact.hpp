/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:13:36 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/21 12:00:16 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
        private:
                std::string firstname;
                std::string lastname;
                std::string nickname;
                std::string phonenumber;
                std::string darkestsecret;
        public:
                Contact();
                ~Contact();
                void            set_entry(std::string, int entry_id);
                std::string     get_entry(int entry_id);
};

#endif