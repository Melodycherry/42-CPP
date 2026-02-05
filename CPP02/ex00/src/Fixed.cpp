/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:45:05 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/12 18:39:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _rawBits(0){
	std::cout << "Default constructor called" << std::endl;	
}

Fixed::Fixed(const Fixed& copy): _rawBits(copy._rawBits){
	std::cout << "Copy constructor called" << std::endl;
}

/**
 * @brief Copy assignment operator
 * Verification pour eviter l'auto affectation (affectation d'un objet a lui meme)
 * si c'est le meme objet, on ne fait rien ( evite copie inutile)
 */
Fixed& Fixed::operator=(const Fixed& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &copy ){
		this->_rawBits = copy._rawBits;
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" <<  std::endl;
	return _rawBits;
}

void Fixed::setRawBits( int const raw ){
	_rawBits = raw;
}