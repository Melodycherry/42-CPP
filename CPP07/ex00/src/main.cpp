/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:45:21 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/14 14:04:24 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template_fonctions.hpp"
#include <iostream>

// SUBJECT MAIN 
int main( void ) 
{ 
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}


// MY MAIN
// int main ()
// {
// 	std::cout << "\n------------------ TEST WITH INTEGERS ------------------" << std::endl;
// 	int a = 2;
// 	int b = 3;
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "swap(a, b)" << std::endl;
// 	swap(a, b);
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
// 	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

// 	std::cout << "\n------------------ TEST WITH STRINGS ------------------" << std::endl;
// 	std::string c = "chaine A";
// 	std::string d = "chaine B";
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "swap(c, d)" << std::endl;
// 	swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
// 	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

// 	std::cout << "\n------------------ TEST WITH FLOATS ------------------" << std::endl;
// 	float e = 1.5f;
// 	float f = 2.5f;
// 	std::cout << "e = " << e << ", f = " << f << std::endl;
// 	std::cout << "swap(e, f)" << std::endl;
// 	swap(e, f);
// 	std::cout << "e = " << e << ", f = " << f << std::endl;
// 	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
// 	std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
	
// 	std::cout << "\n------------------ TEST WITH DOUBLES ------------------" << std::endl;
// 	double g = 3.14159;
// 	double h = 2.71828;
// 	std::cout << "g = " << g << ", h = " << h << std::endl;
// 	std::cout << "swap(g, h)" << std::endl;
// 	swap(g, h);
// 	std::cout << "g = " << g << ", h = " << h << std::endl;
// 	std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
// 	std::cout << "max(g, h) = " << ::max(g, h) << std::endl;
// 	std::cout << std::endl;
	
// 	return 0;
// }

/**
 * @note
 * Ici on doit prefixer les fonctions avec ::
 * Parce que min et max existent deja ds la bibli standard
 * Donc on doit specifier qu'on utilise nos propres fonctions 
 */
