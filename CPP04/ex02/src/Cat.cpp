/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:20 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 14:51:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Cat::Cat() : AAnimal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& copy) : AAnimal(copy){
	std::cout << "Cat copy constructor" << std::endl;
	_brain = new Brain(*copy._brain);
}

Cat& Cat::operator=(const Cat& copy){
	std::cout << "Cat copy assignement operator" << std::endl;
	if ( this != &copy){
		AAnimal::operator=(copy); 
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

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