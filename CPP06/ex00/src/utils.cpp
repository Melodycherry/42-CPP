/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:47:17 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/13 12:21:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "ScalarConverter.hpp"

/* *************************************************** */
/*  Fonction Helper                                    */
/* *************************************************** */ 

bool isChar(const std::string& str){
	if (str.length() == 3)
		if (str[0] == '\'' && str[2] == '\'')
			if (std::isprint(str[1]))
				return true;
	return false;
			
}

bool isInt(const std::string& str){
	size_t index = 0;
	
	// check le signe ( et si il y a juste un signe et pas de digit)
	if (str[0] == '+' || str[0] == '-'){
		index = 1;
		if (str.length() == 1)
			return false;
	}

	// verif digit only
	for ( size_t i = index ; i < str.length() ; i++){
		if (!isdigit(str[i]))
			return false; 
	}
	return true;
}

bool isPseudoLiteral(const std::string& str){
	// faire liste de tt les psuedo literal
	const std::string pseudo[] = {
		"nan", "nanf",
		"+inf", "-inf", "inf",
		"+inff", "-inff", "inff"
	};

	for ( size_t i = 0; i < 8; i++){
		if (str == pseudo[i])
			return true;
	}
	return false;
}

bool isValidDecimal(const std::string& str){
    size_t index = 0;
    bool dotFound = false;
    bool hasDigitBeforeDot = false;
    bool hasDigitAfterDot = false;
    
    // Signe
    if (str[0] == '+' || str[0] == '-') {
        index = 1;
        if (str.length() == 1)
            return false;
    }
    
    // Parcourir le reste
    for (size_t i = index; i < str.length(); i++) {
        if (str[i] == '.') {
            if (dotFound)  // Deux points = invalide
                return false;
            dotFound = true;
        }
        else if (isdigit(str[i])) {
            if (dotFound)
                hasDigitAfterDot = true;
            else
                hasDigitBeforeDot = true;
        }
        else {
            return false;
        }
    }
    
    // Doit avoir un point ET au moins un chiffre (avant OU après)
    return dotFound && (hasDigitBeforeDot || hasDigitAfterDot);
}

bool isFloat(const std::string& str){
	// doit se terminer par F ou f 
	if (str.length() < 2)
		return false;
	char lastChar = str[str.length() - 1];
	if (lastChar != 'f' && lastChar != 'F')
		return false;
		
	// remove f pour verif le reste
	std::string strNoF = str.substr(0, str.length() - 1);
	
	// doit contenir un '.'
	if (strNoF.find('.') == std::string::npos)
		return false;
	return isValidDecimal(strNoF);
}

bool isDouble(const std::string& str){
	// ne se termine PAS par f 
	if ( str.length() > 0){
		char lastChar = str[str.length() - 1];
		if (lastChar == 'f' || lastChar == 'F')
			return false;	
	}
	// doit contenir un '.'
	if (str.find('.') == std::string::npos)
		return false;

	return isValidDecimal(str);
}

/* *************************************************** */
/*  Fonction de display                                */
/* *************************************************** */ 

void printChar(double value){
	std::cout << "Char: ";
	// cas impossibles
	if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127){
		std::cout << "impossible" << std::endl;
		return;
	}
	char c = static_cast<char>(value);
	// cas non displayable
	if (!std::isprint(c)){
		std::cout << "Non displayable" << std::endl;
		return;
	}
	std::cout << "'" << c << "'" << std::endl;
}

void printInt(double value){
	std::cout << "Int: ";
	// cas impossibles
	if (std::isnan(value) || std::isinf(value) ||
        value > std::numeric_limits<int>::max() ||
        value < std::numeric_limits<int>::min()){
        	std::cout << "impossible" << std::endl;
        	return;
    	}
	std::cout << static_cast<int>(value) << std::endl;
}

void printFloat(double value){
	std::cout << "Float: ";
	float f = static_cast<float>(value);
	// pour nan et inf
	if (std::isnan(f))
        std::cout << "nanf" << std::endl;
    else if (std::isinf(f)) {
        if (f > 0)
            std::cout << "+inff" << std::endl;
        else
            std::cout << "-inff" << std::endl;
    }
	else {
		std::cout << f;
		// ajouter .0 si c'est un entier
		if (f - static_cast<int>(f) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void printDouble(double value){
	std::cout << "Double: ";
	// pour nan et inf
	if (std::isnan(value))
		std::cout << "nan" << std::endl;
	else if (std::isinf(value)) {
		if (value > 0)
			std::cout << "+inf" << std::endl;
		else
			std::cout << "-inf" << std::endl;
	}
	else {
		std::cout << value;
		// ajouter .0 si c'est un entier
		if (value - static_cast<int>(value) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
}