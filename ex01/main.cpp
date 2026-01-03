/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:22:55 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/03 11:06:10 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook book;
    std::string command;
    
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command)); //getline(input_stream, string_variable);
            break;
        if (command == "ADD")
            book.ADD();
        else if (command == "SEARCH")
            book.SEARCH();
        else if (command == "EXIT")
            break;
    }
    return (0);
}