/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:23:09 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:31:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


// // Main given by the subject 
// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
	
// 	return 0;
// }


// My own tests 
int main ()
{
	const int arraySize = 6;  // Changer la taille en eval' si besoin
	Animal* animals[arraySize];
	
	std::cout << "=== TEST 1: Array of animals ( half dog, half cat ) ===" << std::endl;
	
	// la première moitié avec Dogs
	for (int i = 0; i < arraySize / 2; i++) {
		std::cout << "\n--- Creating Dog " << i << " ---" << std::endl;
		animals[i] = new Dog();
	}
	// la deuxième moitié avec Cats
	for (int i = arraySize / 2; i < arraySize; i++) {
		std::cout << "\n--- Creating Cat " << i << " ---" << std::endl;
		animals[i] = new Cat();
	}
	std::cout << "\n -> all the animals created \n" << std::endl;
	
	std::cout << "\n === TEST 2: Brain stuff ===" << std::endl;
	if (animals[0]->getBrain()){
	animals[0]->getBrain()->setIdea(0, "I want to eat");
	animals[0]->getBrain()->setIdea(50, "I want to play");
	animals[0]->getBrain()->setIdea(99, "I want to sleep");
	std::cout << "Animal's first thought is: \"" << animals[0]->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Animal's 50th thought is: \"" << animals[0]->getBrain()->getIdea(50) << "\"" << std::endl;
	std::cout << "Animal's 99th thought is: \"" << animals[0]->getBrain()->getIdea(99) << "\"" << std::endl;
	}

	// check deep copy of dog with no double free and show that first thoughts are different
	// copy constructor here
	std::cout << "\n === TEST 3: Deep copy with dogs ( copy constructor) ===" << std::endl;
	Dog dog1;
	dog1.getBrain()->setIdea(0, "Original idea");
	
	Dog dog2(dog1); // copy constrctor

	std::cout << "Dog1 brain address: " << dog1.getBrain() << std::endl;
	std::cout << "Dog2 brain address: " << dog2.getBrain() << std::endl;

	dog2.getBrain()->setIdea(0, "Modified idea");

	std::cout << "Dog1 idea: \"" << dog1.getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Dog2 idea: \"" << dog2.getBrain()->getIdea(0) << "\"" << std::endl;

	if (dog1.getBrain()->getIdea(0) != dog2.getBrain()->getIdea(0)) {
		std::cout << "✓ Deep copy works!" << std::endl;
	} else {
		std::cout << "✗ Shallow copy problem!" << std::endl;
	}
	
	// check deep copy of cat with no double free and show that first thoughts are different
	// copy assignement here
	std::cout << "\n === TEST 4: Deep copy with cats ( assignement operator) ===" << std::endl;
	Cat cat3;
	cat3.getBrain()->setIdea(0, "Cat3 original idea");
	cat3.getBrain()->setIdea(5, "Cat3 meow");

	Cat cat4;
	cat4.getBrain()->setIdea(0, "Cat4 original idea");

	std::cout << "Before assignment:" << std::endl;
	std::cout << "Cat3 idea: \"" << cat3.getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Cat4 idea: \"" << cat4.getBrain()->getIdea(0) << "\"" << std::endl;

	cat4 = cat3;  // Assignment operator

	std::cout << "\nAfter assignment:" << std::endl;
	std::cout << "Cat3 brain address: " << cat3.getBrain() << std::endl;
	std::cout << "Cat4 brain address: " << cat4.getBrain() << std::endl;
	std::cout << "Cat3 idea: \"" << cat3.getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Cat4 idea: \"" << cat4.getBrain()->getIdea(0) << "\"" << std::endl;

	cat4.getBrain()->setIdea(0, "Cat4 modified idea");

	std::cout << "\nAfter modifying cat4:" << std::endl;
	std::cout << "Cat3 idea: \"" << cat3.getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "Cat4 idea: \"" << cat4.getBrain()->getIdea(0) << "\"" << std::endl;

	if (cat3.getBrain()->getIdea(0) != cat4.getBrain()->getIdea(0)) {
		std::cout << "✓ Deep copy works with Cat assignment operator!" << std::endl;
	} else {
		std::cout << "✗ Shallow copy problem with Cat assignment operator!" << std::endl;
	}

	// Loop over the array to delete animals
	// pas besoin de delete pour cats and dogs car cree sur la stack
	// se deletent automatiquement a la fin du scope
	std::cout << "\n === Deleting animals ===" << std::endl;
	for (int i = 0; i < arraySize; i++) {
		std::cout << "Deleting animal " << i << std::endl;
		delete animals[i];
	}
	return (0);
	
}

// SUBJECT FOR THE MAIN
// create and fill array of animal object
// half of it dog
// other half cat
// at the end, loop over and delete animal
// You must delete directly dogs and cats as Animals
// The appropriate destructors must be called in the expected order.

// A copy of a Dog or a Cat mustn’t be shallow. 
// Thus, you have to test that your copies are deep copies!

// shallow copy c'est par ex _brain = copy.brain
// deep copy c'est new brain (*copy_brain)

/**
✅ Ordre de construction : Animal → Dog/Cat → Brain
✅ Ordre de destruction : Dog/Cat → Brain → Animal
✅ Destructeur virtuel fonctionne : Même si on delete via Animal*, le bon destructeur (Dog ou Cat) est appelé
✅ Pas de fuite mémoire : Chaque Brain créé est bien détruit
✅ Les idées sont bien stockées et récupérées dans le Brain
 */