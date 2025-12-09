/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:58 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/09 18:55:48 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) { // init le name ??
	std::cout << "test construct" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	// must print a message with the name of zombie for debugging purpose 
	// Zombie (name) is killed
	std::cout << "Test Zombie killed" << std::endl;
	return;
}

void	Zombie::announce( void ){
	// dit son nom et dit : BraiiiiiiinnnzzzZ...
	std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
