/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:14:37 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/13 13:55:40 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "parsingType.hpp"
#include "utils.hpp"
#include <iostream>

int main (int ac, char **av)
{
	if ( ac != 2)
	{
		std::cout << "Usage : ./ScarlarConverter <input>" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);	
	return 0;
}

/**
 * @brief 
 * You have to first detect the type of the literal passed as a parameter,
 * convert it from string to its actual type, 
 * then convert it explicitly to the three other data types. 
 * Lastly, display the results as shown below.
 */

 /**
  * @example
  * char: Non displayable
  * int: 0
  * float: 0.0f
  * double: 0.0
  * ./convert nan
  * char: impossible
  * int: impossible
  * float: nanf
  * double: nan
  * ./convert 42.0f
  * char: '*'
  * int: 42
  * float: 42.0f
  * double: 42.0
  */

  /**
   * @brief STATIC CAST
   * static_cast<type>(expression)
   * C'est un cast compile-time (le type est vérifié à la compilation)
   * permet de convertir une expression d'un type a un autre de facon explicite
   * utiliser pour les conversions entre types de base ( int, char, float, double )
   * ex : int a = 42;
   * 	  double b = static_cast<double>(a);
   * Attention > ne fait pas de vérification de sécurité (valeur invalide ou overflow par ex)
   * 
   * different de dynamic_cast → polymorphisme (classes avec virtual)
   * source : https://www.geeksforgeeks.org/cpp/static_cast-in-cpp/
   */
