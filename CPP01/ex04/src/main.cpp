/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:34:31 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/19 14:51:24 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char **av)
{
	// verif arg 
	if (ac != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		std::cerr << "Usage: ./Sed <filename> <string_to_replace> <replacement_string>" << std::endl;
		return 1;
	}
	// si string vide 
	if ( av[2][0] == '\0' || av[3][0] == '\0' )
	{
		std::cerr << "Error: Empty string argument" << std::endl;
		return 1;
	}
	// si ouverture echoue 
	std::ifstream srcFile(av[1]);
	if (!srcFile)
	{
		std::cerr << "Error: Could not open source file " << av[1] << std::endl;
		return 1;
	}
	// fichier vide aussi ?
 
	
	// recup file name, s1, s2 ??? 
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	// appelle des fonctions lecture
	// et remplacement
	// et ecriture
	
	// ferme fichier ??
	
	
	return 0;
}	

/**
 * Create a program that takes three parameters in the following order: 
 * a filename and two strings, s1 and s2.
 * It must open the file <filename> and copy its content into a new file <filename>.replace, 
 *  replacing every occurrence of s1 with s2.
 * Using C file manipulation functions is forbidden and will be considered cheating. 
 * All the member functions of the class std::string are allowed, except replace. Use them wisely!
 * Of course, handle unexpected inputs and errors. 
 * You must create and turn in your own tests to ensure that your program works as expected.
 */