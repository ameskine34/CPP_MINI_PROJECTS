/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:23:11 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/03 15:03:31 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        
    public:
        Contact();
    // Member functions to set values
    void    setFirstName(std::string str);
    void    setLastName(std::string str);
    void    setNickname(std::string str);
    void    setPhoneNumber(std::string str);
    void    setDarkestSecret(std::string str);

    // Member functions to get values (Getters)
    std::string getFirstName() ;
    std::string getLastName() ;
    std::string getNickname() ;
    std::string getPhoneNumber() ;
    std::string getDarkestSecret() ;
};

#endif