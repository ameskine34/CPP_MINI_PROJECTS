/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:33:53 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/10 10:57:54 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
    std::string buffer;
    if (ac != 4)
        return (1);
    std::ifstream file(av[1]);
    if (!file.is_open())
    {
        std::cout << "open fails\n";
        return 1;
    }
    std::string str = av[1];
    std::string rep = ".replace";
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ofstream file_out((str + rep).c_str());
    getline(file, buffer, '\0');
    search_file(buffer, file_out, s1, s2);
    return 0;
}