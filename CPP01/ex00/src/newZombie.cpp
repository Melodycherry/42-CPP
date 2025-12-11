/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:31:51 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/11 08:22:21 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name ){
	// create a zombie, name it and returns it so you can use it outside the function scope
	Zombie *z = new Zombie(name);
	return z;
}

/**
 * Va cree un zombie sur la HEAP
 * Utile qd le zombie doit survivre apres la fonction 
 */