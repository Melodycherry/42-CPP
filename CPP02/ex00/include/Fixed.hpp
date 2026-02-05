/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:45:02 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/12 18:38:07 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed{
	
	private:
		int _rawBits; // (fixed point )
		static const int _fractionalBit = 8;

	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
};

#endif

// Canonical form : Underscore au debut pour membres prives de la classe
// Pour le constructeur de copie et l'operateur d'affectation
// on passe l'objet par reference pour eviter une copie inutile
// et on le passe en const pour s'assurer qu'on ne modifie pas l'objet original