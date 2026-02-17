/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsingType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 08:38:55 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/15 14:27:17 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsingType.hpp"
#include "utils.hpp"

/**
 * @brief On detecte le type passé en parametre
 * On utilise les fonctions ds utils.cpp pour detecter le type
 * et on retourne une enum du type LiteralType
 * On va pouvoir utiliser cette enum pour faire les conversions dans ScalarConverter
 * @param str 
 * @return LiteralType 
 */

LiteralType detectType(const std::string& str){
	
	// si str est vide
	if (str.empty())
		return INVALID;
	
	// si str est un char
	if (isChar(str))
		return CHAR;

	// si str est un pseudo-literal
	if (isPseudoLiteral(str))
	{
		if ( str[str.length() - 1] == 'f')
			return FLOAT;
		else
			return DOUBLE; 
	}

	// si est un float
	if (isFloat(str))
		return FLOAT;
	
	// si est un double
	if (isDouble(str))
		return DOUBLE;
		
	// si est un int
	if (isInt(str))
		return INT;
		
	// sinon, type invalide
	else
		return INVALID;
}
