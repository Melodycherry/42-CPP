/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:29:12 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/02 20:00:02 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// definir le constructeur
Phonebook::Phonebook(void){
	//test
	std::cout << "test constructeur" << std::endl;
	return;
}

// def le destructeur
Phonebook::~Phonebook(void){
	// test
	std::cout << "test destructeur" << std::endl;
	// ici free des trucs ? 
	return;
}

// fonctions de phonebook a metttre ? 

//TEST
void	Phonebook::test(void){
	std::cout << "test function" << std::endl;
	std::string str;
	std::cin >> str;
	std::cout << str << std::endl;
	return;
}

// add contact ?
// display contact ?
// search ??

