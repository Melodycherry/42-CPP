/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:20 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:29:35 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 
 
Cat::Cat() : Animal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
	_brain = new Brain();
}

// ici on ne copie pas juste avec copy._brain
// on creer un nouveau brain en recopiant le contenu 
Cat::Cat(const Cat& copy) : Animal(copy){
	std::cout << "Cat copy constructor" << std::endl;
	_brain = new Brain(*copy._brain);
}

// Meme logique ici, on detruit l'ancien brain
// et on recreer un nouveau copié depuis l'autre
// le delet brain est obligatoire car fuite de memoire s'il avait deja un brain
// delete d'abord l'ancien et ENSUITE on cree un nouveau
Cat& Cat::operator=(const Cat& copy){
	std::cout << "Cat copy assignement operator" << std::endl;
	if ( this != &copy){
		Animal::operator=(copy); 
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

// comme il y a un new ds le constructeur, 
// on doit delete ds le destructeur  
Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
	delete _brain; 
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void Cat::makeSound() const{
	std::cout << "Miaou" << std::endl;
}

Brain* Cat::getBrain() const{
	return _brain;
}