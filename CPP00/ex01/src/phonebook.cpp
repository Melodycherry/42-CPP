/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:29:12 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/07 16:14:02 by mlaffita         ###   ########.fr       */
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

	while (true){
		std::cout << "Enter first name: ";
		std::getline(std::cin, input);
		if (isEmptyOrSpaces(input))
			std::cout << "Error: First name cannot be empty." << std::endl;
		else if (!isValidName(input))
			std::cout << "Please enter a valid first name (letters, spaces, hyphens and apostrophes)" << std::endl;
		else{
			newContact.setFirstName(input);
			break;
		}	
	}

	while (true){
		std::cout << "Enter last name: ";
		std::getline(std::cin, input);
		if (isEmptyOrSpaces(input))
			std::cout << "Error: Last name cannot be empty." << std::endl;
		else if (!isValidName(input))
			std::cout << "Please enter a valid last name (letters, spaces, hyphens and apostrophes)" << std::endl;
		else{
			newContact.setLastName(input);
			break;
		}
	}
	
	while (true){
		std::cout << "Enter nickname: ";
		std::getline(std::cin, input);
		if (isEmptyOrSpaces(input))
			std::cout << "Error: nickname cannot be empty" << std::endl;
		else{
			newContact.setNickName(input);
			break;
		}
	}
	
	while (true){
		std::cout << "Enter phone number: ";
		std::getline(std::cin, input);
		if (isEmptyOrSpaces(input))
			std::cout << "Error: phone number cannot be empty" << std::endl;
		else if (!isValidPhoneNumber(input))
			std::cout << "Error: Phone number can only contain digits, spaces, '+', '-', and parenthesis " << std::endl;
			// ajout exemple 
		else{
			newContact.setPhoneNumber(input);
			break;
		}
	}
	
	while (true){
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, input);
		if (isEmptyOrSpaces(input))
			std::cout << "Error: secret cannot be empty ( go ahead, no jugement ...)" << std::endl;
		else {
			newContact.setDarkestSecret(input);
			break;
		}
	}
	
	// enregistrer le contact ds le tableau 
	contacts[index] = newContact;

	//mise a jour des index et compteurs 
	// faire circular buffer ?? pour revenir au debut ? 
	index = (index + 1) % 8;
	if (numContacts < 8) 
		numContacts++;
	
	// mettre un message de confirmation ?
	std::cout << "Contact succesfully added to the PhoneBook !" << std::endl;
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

bool PhoneBook::isEmptyOrSpaces(const std::string &str) const {
    if (str.empty())
        return true;
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i]))
            return false;
    }
    return true;  // que des espaces
}

bool PhoneBook::isValidName(const std::string &str) const {
    for (size_t i = 0; i < str.length(); i++) {
        // lettres, tiret, espace, apostrophe
        if (!std::isalpha(str[i]) && str[i] != '-' && 
            str[i] != ' ' && str[i] != '\'') {
            return false;
        }
    }
    return true;
}

bool PhoneBook::isValidPhoneNumber(const std::string &str) const {
    for (size_t i = 0; i < str.length(); i++) {
        // chiffres, espaces, +, -, ( et )
        if (!std::isdigit(str[i]) && str[i] != ' ' && str[i] != '+' && 
            str[i] != '-' && str[i] != '(' && str[i] != ')') {
            return false;
        }
    }
    return true;
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

