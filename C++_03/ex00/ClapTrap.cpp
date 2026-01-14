/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:33:07 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/13 18:09:01 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source) //we campare the address
    {
        this->name = source.name;
        this->hitPoints = source.hitPoints;
        this->energyPoints = source.energyPoints;
        this->attackDamage = source.attackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap()
{
    name = "";
    hitPoints = 10;
    energyPoints = 10;  
    attackDamage = 0; 
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0)
        return ;
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!\n";
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0)
        return ;
    std::cout << "Claptrap " << name << " take damage\n";
    hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints <= 0 || energyPoints <= 0)
        return ;
    std::cout << "Claptrap " << name << " heals\n";    
    energyPoints--;
    hitPoints += amount;    
}