/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:24:08 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/22 16:24:11 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy): _name(copy._name), _hitPoints(copy._hitPoints), 
	  _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage) {
	std::cout << "ClapTrap copy constructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy){
	std::cout << "ClapTrap assignment operator" <<  std::endl;
	if (this != &copy){
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0){
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else{
		std::cout << "ClapTrap " << _name << " cannot attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints == 0){
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
		return;
	}
	
	if (_hitPoints <= amount){
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount 
		          << " points of damage and is now at 0 hit points" << std::endl;
	}
	else{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount 
		          << " points of damage, remaining hit points: " << _hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0 && _hitPoints > 0){
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " is repaired by " << amount 
				  << " points, total hit points: " << _hitPoints << std::endl;
	}
	else{
		std::cout << "ClapTrap " << _name << " cannot be repaired" << std::endl;
	}
}