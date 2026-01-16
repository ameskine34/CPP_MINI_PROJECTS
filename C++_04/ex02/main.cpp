/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <ameskine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:37:34 by ameskine          #+#    #+#             */
/*   Updated: 2026/01/16 15:40:17 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    Animal* j = new Dog();
    Animal* i = new Cat();
    j->makeSound();
    i->makeSound();
    delete j;//should not create a leak
    delete i;
    return 0;
}
