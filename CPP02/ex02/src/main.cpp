/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:51:20 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/12 19:02:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>

int main( void ) 
{ 
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0; 
}

/**
 * But de la surcharge d'operateur :
 * Pouvoir comparer des objets
 * Pour les classes, rien n'est defini par defaut
 * Il faut definir soi-meme le comportement des operateurs
 * 
 * Pour les comparaisons :
 * const Fixed& other -> pas de copie inutile
 * const a la fin car on ne modifie pas l'objet compare
 * bool car on retourne vrai ou faux
 * 
 * Pour les operateurs arithmetiques :
 * On retourne un nouvel objet Fixed ( car a + b cree un nouveau Fixed )
 * const a la fin car on ne modifie pas les objets utilisees dans l'operation
 * 
 */