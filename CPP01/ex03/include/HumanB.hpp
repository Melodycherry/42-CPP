/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:45 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 20:57:37 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"


class HumanB{
	
	private:
	std::string name;
	// weapon ( pointeur reference and shit ) check which one 
	
	public:
	HumanB(); // name but not weapon ? 
	~HumanB();

	// attack()
	// display : <name> attacks with their <weapon type> 

	// setting the weapon ??
};

#endif

/** 
 * Human B DOES NOT takes the weapon in it's constructor
 */