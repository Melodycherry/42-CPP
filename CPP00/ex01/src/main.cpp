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

#include "phonebook.hpp"

// on doit faire une boucle infinie 

// on doit demander l'input a l'utilisateur 
// utilisation de get line ? 

// if ADD 
// -> fonction add contact

// else if SEARCH
// -> fonction search contact

// else if EXIT
// -> exit(0); // ne pas utiliser exit en tant que tel car interdit en CPP
// sujet dit : programme quit and contact lost forever 
// check si on doit free des trucs avant de quitter ?? et ou ?? destructeur ? 

// else
// -> print message d'erreur ( a definir ? )
// check si on doit free des trucs avant de quitter ?? again ?? attention FREE non plus on peut pas utiliser

int main ()
{
	std::cout << "My awesome PhoneBook" << std::endl;
	
	phonebook	MyPhoneBook; // instance ?? va executer le constructeur et destructeur ? 

	// TEST
	MyPhoneBook.test();
	
	// mettre les instruction ici ? un message ? 

	// boucle infinie here 
	// while (1)
	// {

	// }

	return (0);
}

