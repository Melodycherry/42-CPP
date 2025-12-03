/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:29:12 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/03 18:44:31 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// definir le constructeur
PhoneBook::PhoneBook(void) /*: index(0), numContacts(0)*/ {
	// init en haut, pas a l'intereiru ? 
	// a modif en fonction de comment appeler les index 
	return;
}

// def le destructeur
PhoneBook::~PhoneBook(void){
	// tt ok ici a priori rien a free 
	return;
}

// fonctions de phonebook a metttre ? 
void	PhoneBook::addContact(void){
	
	Contact	newContact;
	std::string	input;

	// demander les infos une par une
	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	// faire une veirif ici pour input vide
	// car sujet dit contact can't have empty field, donc faire un mess erreur si vide ? ou boucle tant que vide ? 
	newContact.setFirstName(input);

	// faire meme chose pour les autres infos ?? x 5 ?
	// tout mettre dans la meme fonction ? 

	// enregistrer le contact ds le tableau 
	contacts[index] = newContact;

	//mise a jour des index et compteurs 
	// faire circular buffer ?? pour revenir au debut ? 
	// index = (index + 1) % 8; ?? 
	if (numContacts < 8) 
		numContacts++;
	
	// mettre un message de confirmation ?
}

void	PhoneBook::displayContacts(void){
	// premiere verif si numContacts == 0
	// message pour dire que le phonebook est vide

	// afficher l'entete de tableau a remplir
	// faire mise en forme jolie 
	// sujet dit : |  Index   |First Name| Last Name | Nickname  |

	// ensuite boucle pour afficher chaque contact
	// attention tronquer les strings si c'est trop long et remplace par ...
	// et aussi sujet dit RIGHT ALIGNED 
	// faire une fonction pour ca a mettre dans phonebook ? 
}

void	PhoneBook::searchContact(void){
	// first on doit display les contacts ( donc fonction au dessus )
	// si y en a pas, message juste return ( mess deja ds display)
	
	// prompt ppour demander l'index
	// verif si input est valide
	// et verif si existe ? deja rempli ou pas ( out of range, define a relevant behavior)

	// afficher les infos du contact 
	// ligne
	// par
	// ligne !!
}



// *************************************************//	
//TEST
void	PhoneBook::test(void){
	std::cout << "test function" << std::endl;
	std::string str;
	std::cin >> str;
	std::cout << str << std::endl;
	return;
}


