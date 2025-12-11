/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:58 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/11 08:28:53 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {
	std::cout << name << "created" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	// must print a message with the name of zombie for debugging purpose 
	// Zombie (name) is killed
	std::cout << name << "was killed" << std::endl;
	return;
}

void	Zombie::announce( void ){
	// dit son nom et dit : BraiiiiiiinnnzzzZ...
	std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
