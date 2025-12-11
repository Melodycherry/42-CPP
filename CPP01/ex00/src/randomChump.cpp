/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:31:58 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/11 17:29:02 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Va creer un zombie sur la STACK
 * Action temporaire, va etre detruit
 * @param name 
 */

void	randomChump( std::string name ){
	Zombie z(name);
	z.announce();
}
