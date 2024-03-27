/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:43:09 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 17:39:53 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
        int i = 1;
        int j = 0;
        
        if (ac == 1)
        {
                std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
                return (0);
        }
        while(av[i])
        {
                while (av[i][j])
                        std::cout<<(char)std::toupper(av[i][j++]);
                j = 0;
                i++;
        }
        std::cout<<std::endl;
        return (0);
}