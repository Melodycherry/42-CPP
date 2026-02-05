/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:23:09 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:08:48 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
	std::cout << "=== TEST AVEC POLYMORPHISME (Animal/Cat/Dog) ===" << std::endl;
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " Little dog " << std::endl; 
	std::cout << i->getType() << " Baby Cat " << std::endl; 
	
	i->makeSound(); // Chat → "Miaou"
	j->makeSound(); // Dog → "Woof"
	meta->makeSound(); // Animal → "Generic sound"
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << "\n=== TEST SANS POLYMORPHISME (WrongAnimal/WrongCat) ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << wrongCat->getType() << " Another kitten " << std::endl;
	
	wrongMeta->makeSound(); // WrongAnimal → "Wrong Animal Generic sound"
	wrongCat->makeSound();  // ❌ Devrait dire "Wrong cat sound" mais dit "Wrong Animal Generic sound"
							// Parce que makeSound() n'est PAS virtual !
	
	delete wrongMeta;
	delete wrongCat;
	
	return 0;
}

/**
 * RECAP POLYMORPHISME
 * Qd on utilise un meme nom de fonction ds plusieurs classes
 * Fonctionne uniquement si on utilise pointeurs ou references vers classe de base
 * 
 * Qd on utilise des pointeurs vers classe mère il faut un destructeur virtuel
 * sans destructeur virtuel, seul animal est appelé mais pas celui de dog ou cat
 * -> fuite de memoire, unexpected behaviour ...
 * 
 * Qd on redefini une fonction virtual ds une classe enfant on appelle ca overriding 
 */

 // Pour le wrongcat, comme le destructeur est pas virtuel, ca va detruire wrong animal
 // Donc normal si ca n'ecrit pas Wrong Cat destructor
