/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:57:29 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/03 22:18:58 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Brain::Brain(){
	std::cout << "Brain default constructor" << std::endl;
}

// On fait une deep copy for chaque idees 
// le copy constructor doit copier les 100 strings pas juste l'adresse du tableau
Brain::Brain( const Brain& copy){
	std::cout << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = copy._ideas[i];
	}
}

// Ici aussi deep copy
// doit copier toute les idees et retourner this as usual
Brain& Brain::operator=(const Brain& copy){
	std::cout << "Brain copy assignement operator" << std::endl;
	if (this != &copy) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = copy._ideas[i];
		}
	}
	return *this;
}

// Pas de delete ici car tableau statique et pas dynamique
Brain::~Brain(){
	std::cout << "Brain destructor" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

std::string Brain::getIdea(int index) const{
	if ( index < 0 || index >= 100){
		std::cerr << "Error: index out of range (" << index << ")" << std::endl;
		return "";
	}
	return _ideas[index];
}

void Brain::setIdea(int index, std::string idea){
	if (index >= 0 && index < 100){
		_ideas[index] = idea;
	}
	// sinon ne fait rien 
}