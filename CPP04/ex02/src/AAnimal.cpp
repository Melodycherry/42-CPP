/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:17 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 14:49:56 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

AAnimal::AAnimal(){
	std::cout << "Animal default constructor" << std::endl;
	_type = "Unknown";
}

AAnimal::AAnimal(std::string type): _type(type){
	std::cout << "Animal constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy): _type(copy._type){
	std::cout << "Animal copy constructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy){
	std::cout << "Animal copy assignement operator" << std::endl;
	if ( this != &copy){
		_type = copy._type;
	}
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "Animal destructor" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

std::string AAnimal::getType() const{
	return _type;
}

// La fonction make sound n'existe plus. 
// Seul dog et cat font un son
// Animal devient un concept abstrait
// Dog et Cat sont des implementation concretes