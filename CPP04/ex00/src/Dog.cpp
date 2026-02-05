/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:23 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/05 14:12:23 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy){
	std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& copy){
	std::cout << "Dog copy assignement operator" << std::endl;
	if ( this != &copy){
		Animal::operator=(copy); 
	}
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}