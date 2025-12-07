/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:29:12 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/07 21:54:25 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): numContacts(0), index(0) {
	return;
}

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
	if (numContacts == 0){
		std::cout << "Phonebook is empty. Use the ADD command to add a contact first" << std::endl;
		return;
	}

	// afficher l'entete de tableau a remplir
	// faire mise en forme jolie ??
	// sujet dit : |  Index   |First Name| Last Name | Nickname  |
	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

	// ensuite boucle pour afficher chaque contact
	// attention tronquer les strings si c'est trop long et remplace par '.'
	// et aussi sujet dit RIGHT ALIGNED ( ok, comme ca par defaut)
	// faire une fonction pour ca a mettre dans phonebook ? OK

	for ( int i = 0 ; i < numContacts ; i++){
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getNickName()) << std::endl;
		
	}
}

void	PhoneBook::searchContact(void){
	// first on doit display les contacts ( donc fonction au dessus )
	displayContacts();
	
	// si y en a pas, message juste return ( mess deja ds display)
	if ( numContacts == 0)
		return;
	
	std::string input;
	int index;
		
	while (true){
		// prompt ppour demander l'index
		std::cout << "Enter the index of contact to display: ";
		std::getline(std::cin, input);
		
		// verif si input est valide
		// si empty, si leght est sup a 1 si c'est pas digit pour input[0]
		// mess : error invalid index et return
		if (input.empty() || input.length() > 1 || !isdigit(input[0])){
			std::cout << "Error : Invalid index" << std::endl;
			continue;
		}

		//conversion en char
		index = input[0] - '0';
		
		// verif si existe
		// et verif si existe ? deja rempli ou pas ( out of range, define a relevant behavior)
		if ( index < 0 || index >= numContacts){
			std::cout << "Error : Index out of range" << std::endl;
			continue;
		}
		break;
	}
	
	// afficher les infos du contact 
	// ligne
	// par
	// ligne !!
	std::cout << std::endl;
	std::cout << "-------- Contact detail --------" << std::endl;
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
	std::cout << std::endl;
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

std::string PhoneBook::truncateString(const std::string &str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

// *************************************************//	
//TEST
void	PhoneBook::test(void){
	std::cout << "--- TEST FONCTION ---" << std::endl;
	// afficher ce qui a ete entre pour verification
	std::string str;
	// afficher le prenom du contact a l'index 0 
	str = "First Name of contact at index 0: " + contacts[0].getFirstName();
	std::cout << str << std::endl;
	return;
}
// *************************************************//	

