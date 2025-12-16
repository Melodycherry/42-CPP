/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:02 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/16 16:51:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){
	return;
}
Weapon::~Weapon(){
	return;
}

// get type
const std::string &Weapon::getType() const{
	return this->type;
}

// set type	
void Weapon::setType(const std::string newType){
	this->type = newType;
}
	