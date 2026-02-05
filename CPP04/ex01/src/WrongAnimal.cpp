/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:26 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/03 15:49:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

WrongAnimal::WrongAnimal(){
	std::cout << "Wrong Animal default constructor" << std::endl;
	_type = "Unknown";
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
	std::cout << "Wrong Animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy): _type(copy._type){
	std::cout << "Wrong Animal copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
	std::cout << "Wrong Animal copy assignement operator" << std::endl;
	if ( this != &copy){
		_type = copy._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong Animal destructor" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

std::string WrongAnimal::getType() const{
	return _type;
}

void WrongAnimal::makeSound() const{
	std::cout << "Wrong Animal Generic sound" << std::endl;
}