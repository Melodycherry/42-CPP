/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:39:29 by mlaffita          #+#    #+#             */
/*   Updated: 2025/11/27 22:56:22 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
	PhoneBook	MyPhoneBook; // instance ?? va executer le constructeur et destructeur ? 
	
	std::string command;
	
	// mettre les instruction ici ? un message d'accueil? 
	// ex : welcome
	// instructions pour add, search et exit 

	std::cout << "Welcome to your PhoneBook!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

	while (1) // ou while commande pas exit ? 
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);

		if ( command == "ADD" )
			MyPhoneBook.addContact();
		else if ( command == "SEARCH" )
			MyPhoneBook.searchContact();
		else if ( command == "EXIT" )
			break ;
		else
			std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	// mettre message de fin de programme ici ?

	//TEST
	MyPhoneBook.test();
	return (0);
}


// else if EXIT
// -> exit(0); // ne pas utiliser exit en tant que tel car interdit en CPP
// sujet dit : programme quit and contact lost forever 
// check si on doit free des trucs avant de quitter ?? et ou ?? destructeur ? 

// else
// -> print message d'erreur ( a definir ? )
// check si on doit free des trucs avant de quitter ?? again ?? attention FREE non plus on peut pas utiliser
