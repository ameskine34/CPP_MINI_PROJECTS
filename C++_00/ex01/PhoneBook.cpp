/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:23:17 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/04 10:46:48 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(){
    _contactcount = 0;
    index = 0;
}

int    PhoneBook::ADD()
{
    std::string input;
    index = index % 8;
    //--------first_name-----------
    std::cout << "Enter First Name: ";
    if (!std::getline(std::cin,input))
        return (1);
    while (input.empty())
    {
        std::cout << "First Name cannot be empty: ";
        if (!std::getline(std::cin,input))
            break;
    }
    _contact[index].setFirstName(input);
    //--------last_name-------------
    std::cout << "Enter Last Name: ";
    if (!std::getline(std::cin,input))
        return (1);    
    while (input.empty())
    {
        std::cout << "Last Name cannot be empty: ";
        if (!std::getline(std::cin,input))
            break;    
    }
    _contact[index].setLastName(input);
    //--------nickname-------------
    std::cout << "Enter Nickname: ";
    if (!std::getline(std::cin,input))
        return (1);    
    while (input.empty())
    {
        std::cout << "Nickname cannot be empty: ";
        if (!std::getline(std::cin,input))
            break;    
    }
    _contact[index].setNickname(input);
    //--------Phone_Number----------------
    std::cout << "Enter Phone Number: ";
    if (!std::getline(std::cin,input))
        return (1);    
    while (input.empty())
    {
        std::cout << "Phone Number cannot be empty: ";
        if (!std::getline(std::cin,input))
            break;    
    }
    _contact[index].setPhoneNumber(input);
    //---------darkest_secret------------
    std::cout << "Enter Darkerst secret: ";
    if (!std::getline(std::cin,input))
        return (1);   
    while (input.empty())
    {
        std::cout << "Darkerst secret cannot be empty: ";
        if (!std::getline(std::cin,input))
            break;    
    }
    _contact[index].setDarkestSecret(input);
    index++;
    _contactcount++;
    std::cout << "The contact is added successfully!" << std::endl;
    return (0);
}

void PhoneBook::printColumn(std::string str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}

void    PhoneBook::SEARCH()
{
    int i = 0;
    std::string input;
    if (this->_contactcount == 0) 
    {
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
    if (!(getline(std::cin, input)))
        return ;
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
    {
        int index = input[0] - '0';
        if (index < _contactcount && index < 8)
        {
            std::cout << "First name: ";
            std::cout << PhoneBook::_contact[index].getFirstName() << std::endl;
            std::cout << "Last Name: ";
            std::cout << PhoneBook::_contact[index].getLastName() << std::endl;
            std::cout << "Nickname: ";
            std::cout << PhoneBook::_contact[index].getNickname() << std::endl;
            std::cout << "Phone number: ";
            std::cout << PhoneBook::_contact[index].getPhoneNumber() << std::endl;    
            std::cout << "darkest secret: ";
            std::cout << PhoneBook::_contact[index].getDarkestSecret() << std::endl;
        }
        else
            std::cout << "Error: Contact does not exist." << std::endl;
    }
    else
        std::cout << "Error: Invalid index." << std::endl;
}