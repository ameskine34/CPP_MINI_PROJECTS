/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:02:57 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/09 10:31:21 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = 0;
    int N = 6;
    Zombie* Zombies = zombieHorde(N, "amine");
    while (i < N)
    {
        Zombies->announce();
        i++;
    }
    delete[] Zombies;
}