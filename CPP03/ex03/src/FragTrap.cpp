/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:38:13 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/31 18:39:48 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int FragTrap::_defaultHitPoints = 100;
int FragTrap::_defaultEnergyPoints = 100;
int FragTrap::_defaultAttackDamage = 30;

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

FragTrap::FragTrap(): ClapTrap(){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy) {
	std::cout << "FragTrap " << _name << " copy constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy){
	std::cout << "FragTrap " << _name << " assignment operator" << std::endl;
	if (this != &copy){
		ClapTrap::operator=(copy);
	}
	return *this;
}
FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " destructed" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " request a high-five !" << std::endl;
}