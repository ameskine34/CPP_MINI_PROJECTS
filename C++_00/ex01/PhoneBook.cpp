/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:23:17 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/03 13:03:46 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip> //input/output manipulators.

PhoneBook::PhoneBook(){
    _contactcount = 0;
    index = 0;
}

void    PhoneBook::ADD()
{
    std::string input;
    index = index % 8;
    //--------first_name-----------
    std::cout << "Enter First Name: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "First Name cannot be empty: ";
        std::getline(std::cin,input);
    }
    _contact[index].setFirstName(input);
    //--------last_name-------------
    std::cout << "Enter Last Name: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "Last Name cannot be empty: ";
        std::getline(std::cin,input);
    }
    _contact[index].setLastName(input);
    //--------nickname-------------
    std::cout << "Enter Nickname: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "Nickname cannot be empty: ";
        std::getline(std::cin,input);
    }
    _contact[index].setNickname(input);
    //--------Phone_Number----------------
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "Phone Number cannot be empty: ";
        std::getline(std::cin,input);
    }
    _contact[index].setPhoneNumber(input);
    //---------darkest_secret------------
    std::cout << "Enter Darkerst secret: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "Darkerst secret cannot be empty: ";
        std::getline(std::cin,input);
    }
    _contact[index].setDarkestSecret(input);
    index++;
    _contactcount++;
    std::cout << "The contact is added successfully!" << std::endl;
}

void PhoneBook::printColumn(std::string str) const {
    if (str.length() > 10) {
        //take first 9 chars and add a dot
        std::cout << str.substr(0, 9) << ".";
    } else {
        // Right-align: fill with spaces until 10 chars
        std::cout << std::setw(10) << str;
    }
}

void    PhoneBook::SEARCH()
{
    int i = 0;
    if (this->_contactcount == 0) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
    std::cout << "Index | First Name | Last Name | Nickname" << std::endl;
    int limit = (_contactcount > 8) ? 8 : _contactcount;
    while (i < limit)
    {
        std::cout << std::setw(10) << i << "|";
        printColumn(PhoneBook::_contact[i].getFirstName());
        std::cout << "|";
        printColumn(PhoneBook::_contact[i].getLastName());
        std::cout << "|";
        printColumn(PhoneBook::_contact[i].getNickname());
        std::cout << std::endl;
        i++;        
    }
    std::cout << "Enter the index : ";
    std::cin << 
}