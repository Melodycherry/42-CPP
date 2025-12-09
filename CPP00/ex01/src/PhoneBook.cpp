/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:29:12 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/09 18:33:21 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): numContacts(0), index(0) {
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

void	PhoneBook::addContact(void){
	
	Contact	newContact;
	std::string	input;

	while (true){
		std::cout << "	➔ Enter first name: ";
		if (!std::getline(std::cin, input))
			return;
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
		std::cout << "	➜ Enter last name: ";
		if (!std::getline(std::cin, input))
			return;
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
		std::cout << "	➜ Enter nickname: ";
		if (!std::getline(std::cin, input))
			return;
		if (isEmptyOrSpaces(input))
			std::cout << "Error: nickname cannot be empty" << std::endl;
		else{
			newContact.setNickName(input);
			break;
		}
	}
	
	while (true){
		std::cout << "	➜ Enter phone number: ";
		if (!std::getline(std::cin, input))
			return;
		if (isEmptyOrSpaces(input))
			std::cout << "Error: phone number cannot be empty" << std::endl;
		else if (!isValidPhoneNumber(input)){
			std::cout << "Error: Phone number can only contain digits, spaces, '+', '-', and parenthesis " << std::endl;
			std::cout << "Example of valid phone number : " << std::endl;
			std::cout << "01 23 45 67 89 or +33 (0)1 23 45 67 89" << std::endl;
			std::cout << "or 01-23-45-67-89 ..." << std::endl;
		}
		else{
			newContact.setPhoneNumber(input);
			break;
		}
	}
	
	while (true){
		std::cout << "	➜ Enter darkest secret: ";
		if (!std::getline(std::cin, input))
			return;
		if (isEmptyOrSpaces(input))
			std::cout << "Error: secret cannot be empty ( go ahead, no jugement ...)" << std::endl;
		else {
			newContact.setDarkestSecret(input);
			break;
		}
	}

	contacts[index] = newContact;

	index = (index + 1) % 8;
	if (numContacts < 8) 
		numContacts++;

	std::cout << "\nContact succesfully added to the PhoneBook !" << std::endl;
}

void	PhoneBook::displayContacts(void){
	
	if (numContacts == 0){
		std::cout << "Phonebook is empty. Use the ADD command to add a contact first" << std::endl;
		return;
	}

	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

	for ( int i = 0 ; i < numContacts ; i++){
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncateString(contacts[i].getNickName()) << std::endl;
		
	}
}

void	PhoneBook::searchContact(void){

	displayContacts();
	if ( numContacts == 0)
		return;
	
	std::string input;
	int index;
		
	while (true){
		std::cout << "\nEnter the index of contact to display: ";
		if (!std::getline(std::cin, input))
			return;
		
		if (input.empty() || input.length() > 1 || !isdigit(input[0])){
			std::cout << "Error : Invalid index" << std::endl;
			continue;
		}

		index = input[0] - '0';

		if ( index < 0 || index >= numContacts){
			std::cout << "Error : Index out of range" << std::endl;
			continue;
		}
		break;
	}
	
	std::cout << std::endl;
	std::cout << "-------- Contact detail --------" << std::endl;
	std::cout << "🔴 First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "🟢 Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "🔵 Nickname: " << contacts[index].getNickName() << std::endl;
	std::cout << "☎️ Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "🍆 Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
}

bool PhoneBook::isEmptyOrSpaces(const std::string &str) const {
    if (str.empty())
        return true;
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i]))
            return false;
    }
    return true;
}

bool PhoneBook::isValidName(const std::string &str) const {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isalpha(str[i]) && str[i] != '-' && 
            str[i] != ' ' && str[i] != '\'') {
            return false;
        }
    }
    return true;
}

bool PhoneBook::isValidPhoneNumber(const std::string &str) const {
    for (size_t i = 0; i < str.length(); i++) {
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

