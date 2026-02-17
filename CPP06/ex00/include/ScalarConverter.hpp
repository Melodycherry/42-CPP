/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:09:38 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/15 14:26:40 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits> // pour les limits, obviously
#include <cmath> // pour les valeurs speciales 
#include <cctype> // pour isprint
#include <cstdlib> // pour atof etc ...


class ScalarConverter
{
	public:
		static void convert(std::string literal);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		ScalarConverter& operator=(const ScalarConverter&);
		~ScalarConverter();

		// Fonctions helper en privé
		// A garder dans la classe car logique de conversion ici
		static void convertFromChar(const std::string& str);
		static void convertFromInt(const std::string& str);
		static void convertFromFloat(const std::string& str);
		static void convertFromDouble(const std::string& str);
};

#endif

/**
 * @note METHODES POUR NE PAS POUVOIR FAIRE D'INSTANCIATION
 * - Faire une classe abstraite avec fonction pure virtual
 * - Constructeur en privé ( ou protected )
 * - Faire = delete pour supprimer le constructeur ( ds public du coup )
 * - static-only class + constructeur privé pour les classes utilitaires
 */

/**
 * @note STATIC ONLY CLASS ( utility class )
 * Classe qui sert juste a regrouper des fonction ou variables static
 * Constructeur en private empeche l'instanciation
 * Utile pour une classe qui sert juste de "boite a outil"
 * Par exemple pour des conversions (ici), fonction mathematique, parsing, helper ...
 */
