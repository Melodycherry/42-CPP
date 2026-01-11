/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:52 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/10 15:06:30 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

// HumanA doit initialiser sa référence dans la liste d'initialisation du constructeur 
// (les références doivent être initialisées à la construction)
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
	return;
}

HumanA::~HumanA(){
	return;
}

void HumanA::attack() const{
	std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}

/** 
 * weapon est une référence (Weapon&)
 * Initialisation obligatoire dans la liste d'initialisation
 * Le weapon est passé au constructeur et ne peut jamais être NULL
 * doit toujorus exister, me changera jamais, relation permanente
 * ( son type peut changer via le setter de Weapon )
 */