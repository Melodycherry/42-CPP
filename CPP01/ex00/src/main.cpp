/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:20 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/11 17:27:38 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie *newZombie( std::string name );
void	randomChump( std::string name );

int main( void )
{
	std::cout << "                              " << std::endl;
	std::cout << "----- CREATING ZOMBIE... -----" << std::endl;
	std::cout << "                              " << std::endl;
	Zombie	*walkingDead1 = newZombie("Daryl");
	Zombie	*walkingDead2 = newZombie("Michonne");
	Zombie	*walkingDead3 = newZombie("Negan");
	walkingDead1->announce();
	walkingDead2->announce();
	walkingDead3->announce();
	delete walkingDead1;
	delete walkingDead2;
	delete walkingDead3;
	/**
	 * Recap HEAP (tas)
	 * Allocation manuelle avec new
	 * Durée de vie contrôlée par le programmeur
	 * Destruction manuelle avec delete
	 * Plus lent mais flexible
	 */

	std::cout << "                              " << std::endl; 
	std::cout << "---  ... AND RANDOM WEIRDO ---" << std::endl;
	std::cout << "                              " << std::endl;
	randomChump("Dead Brain");
	randomChump("Rotting face");
	/**
	 * Recap STACK (pile)
	 * Allocation automatique
	 * Durée de vie limitée au scope { }
	 * Destruction automatique à la fin du scope
	 * Rapide mais taille limitée
	 */
	
	return (0);
}
