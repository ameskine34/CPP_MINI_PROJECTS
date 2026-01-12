/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:31:56 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/09 18:45:29 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void search_file(std::string buff, std::ofstream &file, std::string s1, std::string s2)
{
    size_t find_pos = buff.find(s1);

    if (find_pos == std::string::npos)
    {
        file << buff;
        return ;
    }
    
    while (find_pos != std::string::npos)
    {
        if (s1 == s2)
            break;
        buff.insert(find_pos, s2);
        buff.erase(find_pos + s2.length(), s1.length());
        find_pos = buff.find(s1, 0);
    }
    file << buff;
}