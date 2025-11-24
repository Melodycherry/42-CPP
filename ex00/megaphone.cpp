/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:09:57 by mlaffita          #+#    #+#             */
/*   Updated: 2025/11/24 18:43:41 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main (int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		// utiliser la fonction toupper 
		// attention pas de space entre les concatenations
		// faire protection pour les caracteres non ascii ? Trucs avec les accents a checker 

		// basically faire double boucle ? une pour les ac
		// une autre pour convertir en MAJ chaque string av
	}
	std::cout << std::endl;
	return (0);
}