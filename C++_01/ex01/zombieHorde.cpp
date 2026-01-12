/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:03:10 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/10 08:34:14 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie* Zombies = new Zombie[N]; //calls the constractor N time to initialize the objects created
    int i = 0;
    while (i < N)
    {
        Zombies[i].setname(name);
        i++;
    }
    return (Zombies);
}