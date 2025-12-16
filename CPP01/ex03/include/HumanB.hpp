/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:45 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/16 16:48:34 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"


class HumanB{
	
	private:
	std::string name;
	Weapon *weapon;
	
	public:
	HumanB(std::string name);
	~HumanB();

	void attack() const;

	void setWeapon(Weapon &weapon);
};

#endif

/** 
 * Human B DOES NOT takes the weapon in it's constructor
 * utlise un pointeur vers weapon ( optionel, peut ne pas avoir d'arme)
 * pointeur peut etre NULL, et peut changer de cible
 * il peut etre assigne apres la construction
 */