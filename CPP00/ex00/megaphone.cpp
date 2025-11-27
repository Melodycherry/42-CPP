/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:09:57 by mlaffita          #+#    #+#             */
/*   Updated: 2025/11/27 18:37:30 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for ( int i = 1 ; i < ac ; i++)
		{
			std::string str = av[i];
			for (int j = 0 ; str[j] ; j++)
				str[j] = std::toupper(str[j]);
			std::cout << str;
		}
		// faire protection pour les caracteres non ascii ? Trucs avec les accents a checker 
		// est ce que c'est ok si :"Testée" devient "TESTéE" ou alors mess d'erreur ? 
	}
	std::cout << std::endl;
	return (0);
}