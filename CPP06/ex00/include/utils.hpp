/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:47:09 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/13 13:36:21 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

// Pour le parsing des types  
bool isChar(const std::string& str);
bool isInt(const std::string& str);
bool isFloat(const std::string& str);
bool isDouble(const std::string& str);
bool isPseudoLiteral(const std::string& str);
bool isValidDecimal(const std::string& str);

// Display des differents types 
void printChar(double value);
void printInt(double value);
void printFloat(double value);
void printDouble(double value);

#endif

// Authorized: Any function to convert 
// from a string to an int, a float, or a double. This will help, but won’t do the whole job.

/**
 * FONCTIONS UTILES 
 * std::atoi()    // string -> int
 * std::atof()    // string -> double (seulement celle ci utilisee ds cet exercice)
 * std::strtof()  // string -> float
 * std::strtod()  // string -> double
 */