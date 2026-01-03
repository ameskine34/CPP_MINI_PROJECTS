/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:20:38 by ameskine          #+#    #+#             */
/*   Updated: 2025/12/28 17:48:34 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    char c;
    int i;
    int j;
    
    if (ac > 1)
    {
        i = 1;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                c = std::toupper(av[i][j]);
                std::cout << c;
                j++;
            }
            i++;
        }
        std::cout << '\n';
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
}