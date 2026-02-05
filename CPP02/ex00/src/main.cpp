/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:45:08 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/12 18:42:53 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>

int main( void ) 
{
	// Constructeur par défaut
	Fixed a;
	// Constructeur de copie
	Fixed b( a );
	Fixed c;
	// Opérateur d'affectation
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0; 
}

/**
 * Fixed a;           
// 1. Crée un objet Fixed 'a'
// 2. Appelle le constructeur par défaut
// 3. _rawBits = 0
 * 
 Fixed b(a);        
// 1. Crée un objet Fixed 'b' en copiant 'a'
// 2. Appelle le constructeur de copie
// 3. b._rawBits = a._rawBits = 0
 *
 Fixed c;           
// 1. Crée un objet Fixed 'c'
// 2. Appelle le constructeur par défaut
// 3. _rawBits = 0
 *
 c = b;             
// 1. Affecte 'b' à 'c' avec l'opérateur =
// 2. Appelle operator=
// 3. c._rawBits = b._rawBits = 0
 */

 /**
 * FIXED POINT NUMBER:
 * Fixed point number = entier stocke avec une partie fractionnaire
 * La partie fractionnaire est representee par un certain nombre de bits
 * Ici on utilise 8 bits pour la partie fractionnaire
 */