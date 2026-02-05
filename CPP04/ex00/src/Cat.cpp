/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:20 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/03 16:25:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy){
	std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& copy){
	std::cout << "Cat copy assignement operator" << std::endl;
	if ( this != &copy){
		Animal::operator=(copy); 
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void Cat::makeSound() const{
	std::cout << "Miaou" << std::endl;
}