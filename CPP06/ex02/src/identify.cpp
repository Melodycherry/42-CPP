/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:02:22 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/17 11:36:57 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"
#include <iostream>
#include <cstdlib> // pour rand
#include <ctime> // pour time


/**
 * @brief It randomly instantiates A, B, or C and returns the instance as a Base pointer. 
 * Feel free to use anything you like for the random choice implementation.
 * @return Base* 
 */
Base* generate(void){
	// on doit initialiser le random pour avoir des resultats differents a chaque execution
	static bool initialized = false;
    if (!initialized) {
        std::srand(std::time(NULL));  // Utilise l'heure actuelle comme seed
        initialized = true;
    }
	int random = rand() % 3;
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

/**
 * @brief It prints the actual type of the object pointed to by p: "A", "B", or "C".
 * It must use dynamic_cast and not typeid.
 * @param p 
 */
void identify(Base* p){
	// on test chaque type possible avec dynamic_cast
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

/**
 * @brief It prints the actual type of the object referenced by p: "A", "B", or "C". 
 * Using a pointer inside this function is forbidden.
 * @param p 
 */
void identify(Base& p){
	// on utilise bloc try-catch pour attraper l'exception si conversion echoue
 	try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (...) {}
    
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (...) {}
    
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (...) {}
    
    std::cout << "Unknown type" << std::endl;  // Gestion du cas d'erreur
}

/**
 * @note BAD CAST
 * std::bad_cast est une exception standard en C++ qui est lancée lorsqu'une conversion de type échoue 
 * lors de l'utilisation de dynamic_cast avec des références.
 * Elle permet de gérer les erreurs de conversion de type de manière sécurisée.
 * 
 * Avec un pointeur il n'y a pas d'exception : 
 * - reussi : retourne pointeur valide
 * - echoue : retourne nullptr
 * 
 * Avec reference il y a une exception :
 * - reussi : retourne reference valide
 * - echoue : lance std::bad_cast
 * 
 * Rappel : les references ne peuvent JAMAIS etre nulles
 * elle doivent toujours référencer un objet valide
 * impossible de retourner une ref nulle, dc lance une exception
 */

 /**
  * Update 15.02.2026
  * @note ON NE PEUT PAS UTILISER BAD CAAAAAAAAST
  * Du coup avec les (...) on attrappe TOUTES les exceptions
  * N'importe quel type. C'est un "catch all"
  * Ici pas besoin d'analyser l'erreur, juste savoir si echoue ou pas 
  */