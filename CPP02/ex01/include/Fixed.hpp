/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:38:37 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/11 17:56:05 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif

/**
 * Pour overload of the insertion («) operator:
 * std::cout peut afficher int, float, string etc ...
 * mais pas la classe Fixed
 * il faut le parametrer pour qu'il affiche Fixed
 *
 * La fonction operator<< doit etre une fonction externe
 * ostream c'est une classe de flux de sortie
 * on la passe par reference pour eviter une copie inutile
 * on passe aussi Fixed par reference pour eviter une copie inutile
 * on retourne le flux pour permettre les chaines de cout
 * 
 * operator<< va definir le comportement de l'operateur «
 * qd on ecrit : std::cout << a c'est equivalent a operator<<(std::cout, a)
 * donc premier parametre est la sortie out, et deuxieme ce qu'on doit afficher 
 * const pour ne pas modif, et ref pour eviter copie inutile 
 */