/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:29:12 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/04 16:38:15 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructeur
PhoneBook::PhoneBook(void): numContacts(0), index(0) {
	return;
}

// Destructeur
PhoneBook::~PhoneBook(void){
	return;
}

// Fonctions membres

void	PhoneBook::addContact(void){
	
	Contact	newContact;
	std::string	input;

	// attention trouver un moyen de faire une boucle pour chaque champs sinon ca revient a enter command
	// faire boucle infinie again ? et break qd le champs est rempli ?? 

	// faire 2 verif separee ? 
	// une premiere verif pour emtpy string 
	// une deuxiemen verif pour valid input avec mess plus precis ? 
	// ex : name cannot contain digits 
	// ex : phone number should be ... blabla 

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	if (input.empty()){ // changer pour is valide input pour gerer vide ET space only par exemple
		std::cout << "Error: First name cannot be empty." << std::endl;
		return;
	}
	newContact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	if ( input.empty()){ // changer pour is valide input pour gerer vide ET space only par exemple
		std::cout << "Error: Last name cannot be empty" << std::endl;
		return;
	}
	newContact.setLastName(input);
	
	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	if ( input.empty()){ // changer pour is valide input pour gerer vide ET space only par exemple
		std::cout << "Error: nickname cannot be empty" << std::endl;
		return;
	}
	newContact.setNickName(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	if ( input.empty()){ // changer pour gerer only digit et aussi + ou - ?? et parentheses ? 
		std::cout << "Error: phone number cannot be empty" << std::endl;
		return;
	}
	// extra verif ?? 
	//std::cout << "Please enter a valid phone number" << std::endl;
	// ou mettre extra mess template +xx xxx xx xx ??
	newContact.setNickName(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	if ( input.empty()){ // changer pour is valide input pour gerer vide ET space only par exemple
		std::cout << "Error: secret cannot be empty ( go ahead, no jugement ...)" << std::endl;
		return;
	}
	newContact.setNickName(input);
	
	// enregistrer le contact ds le tableau 
	contacts[index] = newContact;

	//mise a jour des index et compteurs 
	// faire circular buffer ?? pour revenir au debut ? 
	index = (index + 1) % 8;
	if (numContacts < 8) 
		numContacts++;
	
	// mettre un message de confirmation ?
	std::cout << "Contact succesfully added !" << std::endl;
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
	std::cout << "--- TEST FONCTION ---" << std::endl;
	// afficher ce qui a ete entrer pour verification
	std::string str;
	// afficher le prenom du contact a l'index 0 
	str = "First Name of contact at index 0: " + contacts[0].getFirstName();
	std::cout << str << std::endl;
	return;
}
// *************************************************//	

