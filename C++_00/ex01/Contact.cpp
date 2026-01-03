/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:23:05 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/03 15:16:50 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

void Contact::setFirstName(std::string str) 
{
    _firstName = str; 
}

void Contact::setLastName(std::string str)
{
    _lastName = str; 
}
void Contact::setNickname(std::string str)
{
    _nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
    _phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
    _darkestSecret = str;
}

std::string Contact::getFirstName() 
{
    return (_firstName); 
}

std::string Contact::getLastName()
{
    return (_lastName); 
}
std::string Contact::getNickname()
{
    return (_nickname);
}

std::string Contact::getPhoneNumber()
{
    return (_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
    return (_darkestSecret);
}
