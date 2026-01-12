/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:52:43 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/09 12:00:22 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string name)
{
    type = name;
}

const std::string &Weapon::getType() {
    return (type);
}

void Weapon::setType(std::string tp)
{
        type = tp;
}

Weapon::~Weapon(){
}