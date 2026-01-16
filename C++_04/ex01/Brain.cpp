/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:28:26 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 11:40:08 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain is called." << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain is destroyed." << std::endl;
}

Brain::Brain(const Brain& source) {
    std::cout << "Brain deep copy constructor called." << std::endl;
    *this = source;
}

Brain& Brain::operator=(const Brain& source) {
    std::cout << "Brain assignment operator called." << std::endl;
    if (this != &source) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = source.ideas[i];
        }
    }
    return *this;
}