/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:42 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/16 16:48:34 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{
	
	private:
	std::string name;
	Weapon &weapon;

	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void attack() const;
	
};

#endif

/** 
 * Human A takes the weapon in it's constructor
 * Utilise une REFERENCE vers weapon ( toujours arme )
 * reference ne peut jamais etre nulle, ne peut pas changer de cible, 
 * et doit etre init a la construction
 */