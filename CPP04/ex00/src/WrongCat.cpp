/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:29 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/03 16:42:19 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

WrongCat::WrongCat() : WrongAnimal("Wrong Cat"){
	std::cout << "Wrong Cat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy){
	std::cout << "Wrong Cat copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy){
	std::cout << "Wrong Cat copy assignement operator" << std::endl;
	if ( this != &copy){
		WrongAnimal::operator=(copy);
	}
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "Wrong Cat destructor" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void WrongCat::makeSound() const{
	std::cout << "Wrong cat sound" << std::endl;
}
