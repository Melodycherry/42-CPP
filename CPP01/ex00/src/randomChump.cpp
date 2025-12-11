/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:31:58 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/10 17:08:06 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name ){
	// create a zombie, name it and make it announce itself 
	Zombie z(name);
	z.announce();
}

/**
 * Va creer un zombie sur la STACK
 * Action temporaire, va etre detruit
 */