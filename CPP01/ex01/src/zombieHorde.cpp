/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:40:22 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 15:02:25 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name){
	
	// appelle automatique du constructeur n fois
	// allocation en une seule fois
	Zombie *horde = new Zombie[n];
	
	for ( int i = 0; i < n; i++){
		horde[i].setName(name);
	}
	return horde;
}