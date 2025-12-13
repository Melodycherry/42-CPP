/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:58 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 15:50:37 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructeur par defaut
Zombie::Zombie(void){
	return;
}

Zombie::Zombie(std::string name): name(name) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << "☠️  " << name << " was killed" << std::endl;
	return;
}

void	Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::setName(std::string name){
	this->name = name;
}
