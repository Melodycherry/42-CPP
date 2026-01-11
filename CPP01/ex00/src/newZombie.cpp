/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:31:51 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/11 11:56:44 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Va cree un zombie sur la HEAP
 * Utile qd le zombie doit survivre apres la fonction 
 * retourne l'adresse du zombie, pointeur local z disparait
 * mais zombie existe tjrs donc doit etre detruit avec delete
 * @param name 
 * @return Zombie* 
 */

Zombie *newZombie( std::string name ){
	Zombie *z = new Zombie(name);
	return z;
}
