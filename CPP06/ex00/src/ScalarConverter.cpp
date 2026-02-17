/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:09:41 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/15 14:28:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "parsingType.hpp"
#include "utils.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) {
	(void)copy;
	return *this;
}

ScalarConverter::~ScalarConverter() {
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void ScalarConverter::convert(const std::string literal)
{
	LiteralType type = detectType(literal);
	
	switch(type){
		case CHAR:
			convertFromChar(literal);
			break;
		case INT:
			convertFromInt(literal);
			break;
		case FLOAT:
			convertFromFloat(literal);
			break;
		case DOUBLE:
			convertFromDouble(literal);
			break;
		case INVALID:
			std::cout << "Error : invalid input" << std::endl;
			break;
	}
}	

void ScalarConverter::convertFromChar(const std::string& str){
	char c = str[1];
	// on stock ds un double
	double value = static_cast<double>(c);
	// afficher des autres types
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}

void ScalarConverter::convertFromInt(const std::string& str){
	// atol pour gestion des big number
	long tmp = std::atol(str.c_str());
	// Check les overflow
	if ( (tmp > std::numeric_limits<int>::max()) ||
		 (tmp < std::numeric_limits<int>::min())){
			std::cout << "Char : impossible" << std::endl;
			std::cout << "Int : impossible" << std::endl;
			std::cout << "Float : impossible" << std::endl;
			std::cout << "Double : impossible" << std::endl;
			return;
		}
	// stock ds un double
	double value = static_cast<double>(tmp);
	// Print
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}

void ScalarConverter::convertFromFloat(const std::string& str){
	float f;
	// Gestion des pseudo literal
	if ( str == "nanf" || str == "nan")
		f = std::numeric_limits<float>::quiet_NaN(); // moyen de creer un NaN utilisable ds les calculs
	else if ( str == "+inff" || str == "inff")
		f = std::numeric_limits<float>::infinity();
	else if (str == "-inff")
		f = -std::numeric_limits<float>::infinity();
	else
		f = std::atof(str.c_str());
	// stock double
	double value = static_cast<double>(f);
	// print
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}

void ScalarConverter::convertFromDouble(const std::string& str){
	double d;
	// Gestion des pseudo literal
	if ( str == "nanf" || str == "nan")
		d = std::numeric_limits<double>::quiet_NaN();
	else if ( str == "+inff" || str == "inff")
		d = std::numeric_limits<double>::infinity();
	else if (str == "-inff")
		d = -std::numeric_limits<double>::infinity();
	else
		d = std::atof(str.c_str());
	// Print
	printChar(d);
	printInt(d);
	printFloat(d);
	printDouble(d);
}

/**
 * @note str.c_str()
 * Certaines fonction heritees du c ne prennet pas un string mais un char*
 * par ex atol attend un const char* donc on doit convertir std::string en format c
 * str.c_str() retourne un pointeur vers une chaine de caractere en format c (char*)
 */

/**
 * @note PSEUDO LITERAL
 * nan, +inf, -inf pour double
 * nanf, +inff, -inff pour float
 * ce sont des valeurs speciales qui ne sont pas des nombres mais cas particulier en floating point
 * nan = Not a Number ( resultat d'operation mathematique invalide )
 * inf = Infinity ( resultat d'operation qui depasse la plage representable )
 * le f a la fin indique que c'est un float, sinon double
 * ils doivent etre geres a part car ne peuvent pas etre convertis en int ou char 
 */

 /**
  * @note CONVERSION EN DOUBLE
  * on convertit d'abord en double car c'est le type le plus "large" ( qui peut representer le plus de valeur )
  * Peut representer presque tout ce que int et float peuvent representer 
  * ( sauf les big number qui depassent les limites de double )
  * Int rentre ds un double
  * Float rentre ds un double sans perte majeure de precision
  * Double sert de "conteneur universel"
  * Double gere aussi des pseudo literal ( nan, inf ) et les big number ( au dela de int et float )
  * Donc pour recap'
  * - type le plus flexible
  * - garde les decimales
  * - plus precis que float
  * - supporte nan et inf
  * - simplifie les conversions vers autre types
  */