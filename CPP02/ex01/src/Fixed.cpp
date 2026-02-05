/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:38:40 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/12 18:47:37 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <cmath>

/**
 * POUR RAPPEL FIXED POINT NUMBER:
 * Fixed point number = entier stocke avec une partie fractionnaire
 * La partie fractionnaire est representee par un certain nombre de bits
 * Ici on utilise 8 bits pour la partie fractionnaire
 */

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
}

// Converti un entier en format fixed point 
// On decale l'entier de 8 bits vers la gauche
// ce qui revient a multiplier par 256 (2^8)
// Decalage de bit fonctionne directement avec les entier
Fixed::Fixed(const int intValue){
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = intValue << _fractionalBits; 
}

// Converti un float en format fixed point
// On multiplie le float par 256 (2^8)
// et on arrondit le resultat pour obtenir un entier
// 1 << 8 est equivalent a 256
// On ne peut pas utiliser le decalage de bits avec les float
// il faut d'abord multiplier puis convertir en entier
Fixed::Fixed(const float floatValue){
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	_fixedPointValue = copy._fixedPointValue;
}

Fixed& Fixed::operator=(const Fixed& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy){
		_fixedPointValue = copy._fixedPointValue;
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw){
    _fixedPointValue = raw;
}

// division par 256
// attention au cast en float pour eviter division entiere
// on convertie _fixedPointValue en float avant la division
float Fixed::toFloat( void ) const{
	return (float)_fixedPointValue / (1 << _fractionalBits);
}

// Decalage de 8 bits vers la droite ( >> 8 meme chose que / 256)
int Fixed::toInt( void ) const{
	return _fixedPointValue >> _fractionalBits; 
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();  // Affiche la représentation float
    return out;              // Retourne le flux pour le chaînage
}


/** 
 * ATTENTION DIFFERENCE ENTRE ENTIER ET FLOAT POUR LES OPERATIONS
 * INT : decalage de bits possible
 * FLOAT : multiplication / division
 * EX : intValue << 8  <=> intValue * 256
 * EX : floatValue * 256 <=> floatValue * (1 << 8)
*/