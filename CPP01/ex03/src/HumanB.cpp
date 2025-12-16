/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:56 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/16 17:29:51 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL){
	return;
}

HumanB::~HumanB(){
	return;
}

void HumanB::attack() const{ 
	if (this->weapon)
		std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

/**
 * weapon (paramètre) = référence vers un objet Weapon
 * &weapon = l'adresse de cet objet
 * this->weapon = pointeur (membre) qui va stocker cette adresse
 */

/**
 * weapon est un pointeur (Weapon*)
 * Peut être NULL (initialisé à NULL dans le constructeur)
 * Méthode setWeapon() pour attribuer une arme plus tard
 * Vérification if (this->weapon) avant d'utiliser le pointeur
 */