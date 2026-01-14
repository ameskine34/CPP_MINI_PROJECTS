/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:32:56 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/14 10:57:36 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is destroyed!" << std::endl;
}

FragTrap::FragTrap()
{
    name = "";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& source): ClapTrap(source)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = source;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << " highFivesGuys" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& source)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &source)
    {
        this->name = source.name;
        this->hitPoints = source.hitPoints;
        this->energyPoints = source.energyPoints;
        this->attackDamage = source.attackDamage;
    }
    return *this;
}