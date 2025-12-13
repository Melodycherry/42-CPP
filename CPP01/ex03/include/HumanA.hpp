/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:42 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 20:54:35 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{
	
	private:
	std::string name;
	// weapon ( pointeur reference and shit ) check which one 

	public:
	HumanA(); // name and weapon 
	~HumanA();
	
	// attack()
	// display : <name> attacks with their <weapon type> 
	
};

#endif

/** 
 * Human A takes the weapon in it's constructor
 */