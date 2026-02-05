/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:17 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 14:37:59 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Animal::Animal(){
	std::cout << "Animal default constructor" << std::endl;
	_type = "Unknown";
}

Animal::Animal(std::string type): _type(type){
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal& copy): _type(copy._type){
	std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& copy){
	std::cout << "Animal copy assignement operator" << std::endl;
	if ( this != &copy){
		_type = copy._type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal destructor" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

std::string Animal::getType() const{
	return _type;
}

// Cette fonction va etre overwitten par la fonction de dog et cat ( polymorphisme)
void Animal::makeSound() const{
	std::cout << "Generic sound" << std::endl;
}