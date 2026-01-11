/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:02 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/11 12:04:37 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){
	return;
}
Weapon::~Weapon(){
	return;
}

const std::string &Weapon::getType() const{
	return this->type;
}

void Weapon::setType(const std::string newType){
	this->type = newType;
}
	