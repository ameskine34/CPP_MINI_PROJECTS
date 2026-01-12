/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 09:52:05 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/09 09:58:28 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory address of the string variable: " << &str << std::endl;
    std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;   
    std::cout << "memory address held by stringPTR: " << &stringREF << std::endl;
    
    std::cout << "value of the string variable: " << str << std::endl;
    std::cout << "value of stringPTR: " << *stringPTR << std::endl;   
    std::cout << "value of stringPTR: " << stringREF << std::endl;
}