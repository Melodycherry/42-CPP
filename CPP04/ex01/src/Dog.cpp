/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:23 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:30:19 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog default constructor" << std::endl;
	_brain = new Brain();
}

// ici on ne copie pas juste avec copy._brain
// on creer un nouveau brain en recopiant le contenu 
Dog::Dog(const Dog& copy) : Animal(copy){
	std::cout << "Dog copy constructor" << std::endl;
	_brain = new Brain(*copy._brain);
}

// Meme logique ici, on detruit l'ancien brain
// et on recreer un nouveau copié depuis l'autre
// le delet brain est obligatoire car fuite de memoire s'il avait deja un brain
// delete d'abord l'ancien et ENSUITE on cree un nouveau
Dog& Dog::operator=(const Dog& copy){
	std::cout << "Dog copy assignement operator" << std::endl;
	if ( this != &copy){
		Animal::operator=(copy); 
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

// comme il y a un new ds le constructeur, 
// on doit delete ds le destructeur 
Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
	delete _brain; 
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const{
	return _brain;
}