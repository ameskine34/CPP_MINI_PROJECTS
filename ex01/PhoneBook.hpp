/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:23:20 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/02 18:05:14 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
  private:
    Contact _contact[8];
    int _contactcount;
    
  public:
    PhoneBook(); //without the constractor the variables gonna contain garbage value
    void addContact();
    void searchContact();
    // void printColumn(std::string str) const;
};
#endif