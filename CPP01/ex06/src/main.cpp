/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:12:18 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/23 13:31:04 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getLevelIndex(std::string level);
void harlFilter(std::string level);


int main (int ac, char **av)
{
	Harl harl;

	if (ac != 2){
		std::cerr << "Usage ./harlFilter <level>" << std::endl;
		return 1;
	}

	harlFilter(av[1]);

	return (0);
}


int getLevelIndex(std::string level){
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++){
		if (levels[i] == level)
			return i;
	}
	return -1;
}

void harlFilter(std::string level){
	
	Harl harl;
	int  levelIndex = getLevelIndex(level);

	switch (levelIndex){
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}