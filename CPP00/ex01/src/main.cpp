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
	
	std::cout << std::endl;
	std::cout << "📟 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~📟 " << std::endl;
	std::cout << "📟       Welcome to your PhoneBook!         📟 " << std::endl;
	std::cout << "📟 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~📟 " << std::endl;
	std::cout << std::endl;
	std::cout << "➤ Commands → ADD | SEARCH | EXIT" << std::endl;

	while (true)
	{
		std::cout << "\nEnter command: ";
		std::getline(std::cin, command);

		if ( command == "ADD" )
			MyPhoneBook.addContact();
		else if ( command == "SEARCH" )
			MyPhoneBook.searchContact();
		else if ( command == "EXIT" )
			break ;
		else
			std::cout << "Invalid command: Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	
	std::cout << "\n ♡ Thank you for using PhoneBook ♡ " << std::endl;

	return (0);
}

