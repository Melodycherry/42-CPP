/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:23 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 14:51:21 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Dog::Dog() : AAnimal("Dog"){
	std::cout << "Dog default constructor" << std::endl;
	_brain = new Brain();
}

// Copy constructeur avec deep copy
Dog::Dog(const Dog& copy) : AAnimal(copy){
	std::cout << "Dog copy constructor" << std::endl;
	_brain = new Brain(*copy._brain);
}

Dog& Dog::operator=(const Dog& copy){
	std::cout << "Dog copy assignement operator" << std::endl;
	if ( this != &copy){
		AAnimal::operator=(copy); 
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

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