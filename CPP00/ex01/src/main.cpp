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
	PhoneBook	MyPhoneBook;
	
	std::string command;

	std::cout << "Welcome to your PhoneBook!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

	while (true)
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
	
	std::cout << "Thank you for using PhoneBook" << std::endl;

	//TEST
	//MyPhoneBook.test();
	return (0);
}


// else if EXIT
// -> exit(0); // ne pas utiliser exit en tant que tel car interdit en CPP
// sujet dit : programme quit and contact lost forever 
// check si on doit free des trucs avant de quitter ?? et ou ?? destructeur ? 
