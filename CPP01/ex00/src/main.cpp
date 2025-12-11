/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:20 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/11 08:30:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main( void )
{
	// create zombie on HEAP
	Zombie	*walkingDead = newZombie("Daryl ");
	walkingDead->announce();
	delete walkingDead;

	// create zombie on STACK
	randomChump("Michonne ");
	
	return (0);
}

// "you have to determine in which case it is better to allocate zombie on the stack or on the heap" 
// check that , les diff et comment implementer 

 /**
  * Stack (pile) :
Allocation automatique
Durée de vie limitée au scope { }
Destruction automatique à la fin du scope
Rapide mais taille limitée
 * 
Heap (tas) :
Allocation manuelle avec new
Durée de vie contrôlée par le programmeur
Destruction manuelle avec delete
Plus lent mais flexible
  * 
  */