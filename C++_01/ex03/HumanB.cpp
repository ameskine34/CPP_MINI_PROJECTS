/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:52:55 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/10 10:50:13 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
    weaponB = NULL;
    name = "";
}

HumanB::HumanB(std::string name){
    weaponB = NULL;
    this->name = name;
}

void HumanB::setWeapon(Weapon &weaponb)
{
    weaponB = &weaponb;
}

void HumanB::attack(){
    std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}

HumanB::~HumanB(){
}