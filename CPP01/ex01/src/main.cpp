/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:40:18 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/11 12:00:50 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main ()
{
	int n;
	std::string name;
	
	// NUMBER OF ZOMBIES + VERIF INPUT
	while (true ){
		std::cout << "Enter the number of zombies to create: ";
		if (!(std::cin >> n)) {
			std::cerr << "Please enter a valid number" << std::endl;
			std::cin.clear(); // clear fail state
			std::cin.ignore(10000, '\n'); // vide le buffer
			
			if (std::cin.eof()) // Pr le ctrl-D
				return 1;
			continue;
		}
		else if (n <= 0) {
			std::cout << "Number must be greater than 0" << std::endl;
			continue;
		}
		break;
	}
	
	// NAME OF ZOMBIES + VERIF INPUT
	while (true){
		std::cout << "Enter the name for the zombies: ";
		if (!std::getline(std::cin, name)) {
			std::cerr << "Invalid input" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			
			if (std::cin.eof())
				return 1;
			continue;
		}
		if (name.empty()){
			std::cout << "Name cannot be empty" << std::endl;
			continue;
		}
		break;
	}
	
	// Create horde
	std::cout << "\n----- Creating horde -----" << std::endl;
	Zombie *horde = zombieHorde(n, name);
	std::cout << n << " zombies named " << name << " created." << std::endl;
	
	// Announce all zombies
	std::cout << "\n-------- Announce --------" << std::endl;
	for (int i = 0; i < n; i++){
		horde[i].announce();
	}

	// Delete horde
	std::cout << "\n----- Delete horde -----" << std::endl;
	delete [] horde;
	
	return (0);	
}



/**
 * Allouer un tableau d'objet sur la HEAP avec new{}
 * new et new[] sont differents
 * destructeur va donc etre delete[] vs delete
 * On peut gerer la memoire de plusieurs objet d'un coup
 */

 /**
 * Qd on utilise new[], tjr utiliser delete[]
 * Sinon memory leak, on delete juste le 1er objet
 */
