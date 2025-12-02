/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:40:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/02 19:58:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

// max contact de 8 ? faire un define ? 
// Contact contact[8] ? faire un array  
// ici ou ds la cintact.hpp ??
// a mettre dans les champs prives de la classe phonebook ??
// fare un compteur aussi pour pas depasser 8 ? 

// creation de la classe phonebook

class Phonebook{

	private:
	// smth

	public:
	//smth 

	// constructeur et destructeur again ?
	Phonebook(void);
	~Phonebook(void);

	//TEST
	void	test(void);
};

// dans les cahmps prives 
// contact avec le define de max contact de 8 
// le int pour compter nombre de contact
// faire un index ? pour ajout ?

// ensuite methose publique 
// mettre toutes les fonctions :
// add contact ?
// display contact ? 
// searhc ??
// print ??
// ...


#endif
