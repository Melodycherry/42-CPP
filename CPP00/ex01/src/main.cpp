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

	// TEST
	MyPhoneBook.test();
	// string commande ? 
	
	// mettre les instruction ici ? un message d'accueil? 
	// ex : welcome
	// instructions pour add, search et exit 

	while (1) // ou while commande pas exit ? 
	{
		// mess pour entrer une commande 
		// get line pour lire la commande

		// if comande == add
		// MyPhoneBook.addContact();
		// else if == search
		// MyPhoneBook.searchContact();
		// else if == exit
		// break; ?? // ne pas utiliser exit attentiiiiion

		// aussi else final pour invalid commande
		// mess d'erreur a faire 
	}

	// mettre message de fin de programme ici ?
	return (0);
}


// else if EXIT
// -> exit(0); // ne pas utiliser exit en tant que tel car interdit en CPP
// sujet dit : programme quit and contact lost forever 
// check si on doit free des trucs avant de quitter ?? et ou ?? destructeur ? 

// else
// -> print message d'erreur ( a definir ? )
// check si on doit free des trucs avant de quitter ?? again ?? attention FREE non plus on peut pas utiliser
