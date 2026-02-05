/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:39:28 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/31 18:42:09 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(){
	_name = "default";
	_hitPoints = FragTrap::_defaultHitPoints;
	_energyPoints = ScavTrap::_defaultEnergyPoints;
	_attackDamage = FragTrap::_defaultAttackDamage;
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	_name = name;
	_hitPoints = FragTrap::_defaultHitPoints;
	_energyPoints = ScavTrap::_defaultEnergyPoints;
	_attackDamage = FragTrap::_defaultAttackDamage;
	std::cout << "DiamondTrap " << _name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy){
	_name = copy._name;
	std::cout << "DiamondTrap " << _name << " copy constructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy){
	std::cout << "DiamondTrap assignment operator" <<  std::endl;
	if ( this != &copy){
		ClapTrap::operator=(copy);
		ScavTrap::operator=(copy);
		FragTrap::operator=(copy);
		_name = copy._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << _name << " destructed" <<  std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name 
	          << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

// Deux attributs _name differents 
// le _name de Diamond trap ( private attribut)
// et l'heritage de ClapTrap avec ClapTrap::_name