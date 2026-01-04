/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:23:20 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/04 09:50:49 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
  private:
    Contact _contact[8];
    int _contactcount;
    int index;
    
  public:
    PhoneBook(); //without the constractor the variables gonna contain garbage value
    int ADD();
    void SEARCH();
    void printColumn(std::string str);
};
#endif