/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:24:39 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/31 18:09:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

ScavTrap::ScavTrap(): ClapTrap(){
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy){
	std::cout << "ScavTrap " << _name << " copy constructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy){
	std::cout << "ScavTrap " << _name << " assignment operator" <<  std::endl;
	if (this != &copy){
		ClapTrap::operator=(copy); // appelle le parent operator=
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << _name << " destructed" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void ScavTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0){
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else{
		std::cout << "ScavTrap " << _name << " cannot attack" << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

