/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:58 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/11 17:29:45 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {
	std::cout << "🧟 " << name << " created" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "☠️  " << name << " was killed" << std::endl;
	return;
}

void	Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ... 🧠" << std::endl;
	return;
}
