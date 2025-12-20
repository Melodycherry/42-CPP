/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:34:31 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/20 13:10:36 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char **av)
{
	// verif arg 
	if (ac != 4){
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		std::cerr << "Usage: ./Sed <filename> <string_to_replace> <replacement_string>" << std::endl;
		return 1;
	}
	
	std::string filename = av[1];
	std::string search = av[2];
	std::string replace = av[3]; // can be empty ? 
	
	// si string vide 
	if ( search.empty()){
		std::cerr << "Error: Search string cannot be empty" << std::endl;
		return 1;
	}
	
	// si ouverture echoue 
	std::ifstream input(filename);
	if (!input){
		std::cerr << "Error: Could not open source file " << filename << std::endl;
		return 1;
	}
	
	// cree fichier de destination
	std::ofstream output(filename + ".replace");
	if (!output){
		std::cerr << "Error: Could not create destination file " << filename << ".replace" << std::endl;
		return 1;
	}
	
	// traiter le fichier
	std::string line;
	while (std::getline(input, line))
	{
		size_t pos = line.find(search);
			while (pos != std::string::npos)
			{
				line = line.substr(0, pos) + replace + line.substr(pos + search.length());
				pos = line.find(search, pos + replace.length());
			}
			output << line << "\n";
	}
	
	// ferme fichier ??
	input.close();
	output.close();
	
	return 0;
}	

/**
 * SUBJECT:
 * Create a program that takes three parameters in the following order: 
 * a filename and two strings, s1 and s2.
 * It must open the file <filename> and copy its content into a new file <filename>.replace, 
 *  replacing every occurrence of s1 with s2.
 * Using C file manipulation functions is forbidden and will be considered cheating. 
 * All the member functions of the class std::string are allowed, except replace. Use them wisely!
 * Of course, handle unexpected inputs and errors. 
 * You must create and turn in your own tests to ensure that your program works as expected.
 */

 
 /**
  * UTILISATION DES DIFFERENTE FONCTIONS DE STRING
  * find(str, pos)    : cherche str à partir de pos, retourne l'index ou npos
  * substr(pos, len)  : extrait une sous-chaîne depuis pos sur len caractères
  * length() / size() : retourne le nombre de caractères dans la string
  * npos              : constante = "non trouvé" (à comparer avec find)
  * empty()           : retourne true si la string est vide
  */