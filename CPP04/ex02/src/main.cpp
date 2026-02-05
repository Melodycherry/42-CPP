/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:23:09 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:43:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "=== TEST 1: Tentative d'instancier Animal (devrait ne pas compiler) ===" << std::endl;
	//AAnimal animal;  // ❌ Ligne a decommenter pour tester → erreur de compilation
	//AAnimal* animal = new Animal();  // ❌  Ligne a decommenter pour tester → erreur de compilation
	std::cout << "Animal ne peut pas etre instancié directement ✓" << std::endl;
	
	std::cout << "\n=== TEST 2: Création de Dog et Cat (doit fonctionner) ===" << std::endl;
	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();
	
	std::cout << "\nType de dog: " << dog->getType() << std::endl;
	std::cout << "Type de cat: " << cat->getType() << std::endl;
	
	std::cout << "\n=== TEST 3: Polymorphisme avec makeSound ===" << std::endl;
	dog->makeSound();  // Doit afficher "Woof"
	cat->makeSound();  // Doit afficher "Miaou"
	
	std::cout << "\n=== TEST 4: Tableau polymorphe ===" << std::endl;
	const int arraySize = 4;
	AAnimal* animals[arraySize];
	
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	
	std::cout << "\nSons de tous les animaux:" << std::endl;
	for (int i = 0; i < arraySize; i++) {
		std::cout << "Animal " << i << " (" << animals[i]->getType() << "): ";
		animals[i]->makeSound();
	}
	
	std::cout << "\n=== TEST 5: Test Brain avec classe abstraite ===" << std::endl;
	Dog* testDog = new Dog();
	testDog->getBrain()->setIdea(0, "I'm a concrete Dog!");
	testDog->getBrain()->setIdea(10, "Not an abstract Animal!");
	
	std::cout << "Dog idea 0: \"" << testDog->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Dog idea 10: \"" << testDog->getBrain()->getIdea(10) << "\"" << std::endl;
	
	std::cout << "\n=== TEST 6: Deep copy fonctionne toujours ===" << std::endl;
	Dog dog1;
	dog1.getBrain()->setIdea(0, "Original");
	
	Dog dog2(dog1);
	dog2.getBrain()->setIdea(0, "Copy");
	
	if (dog1.getBrain()->getIdea(0) != dog2.getBrain()->getIdea(0)) {
		std::cout << "✓ Deep copy fonctionne avec classe abstraite!" << std::endl;
	} else {
		std::cout << "✗ Problème de deep copy" << std::endl;
	}
	
	std::cout << "\n=== Nettoyage ===" << std::endl;
	delete dog;
	delete cat;
	delete testDog;
	
	for (int i = 0; i < arraySize; i++) {
		delete animals[i];
	}

	return 0;
}

/**
 * Donc avec classe abstraite on ne peut pas faire :
 * AAnimal a;
 * AAnimal* a = new AAnimal();
 * 
 * Mais on peut faire :
 * AAnimal* a = new Dog();
 * Par ce que dog est une classe concrete 
 */
