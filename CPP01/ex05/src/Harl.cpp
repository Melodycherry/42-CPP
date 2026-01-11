/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:57:09 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/11 12:16:11 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	return;
}

Harl::~Harl(){
	return;
}	

void Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){

	// tableau de niveau
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	// tableau de pointeurs vers fonctions membres
	// on donne les adresses des methodes de la classe Harl
	// pas de () car on ne les appelle pas ici !! On veut juste l'adresse
	void (Harl::*functions[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning, 
		&Harl::error,
	};
	
	// Recherche du niveau et appel de la fonction correspondante
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level ){
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Unknown level" << std::endl;
}

/**
 * POINTEURS VERS FONCTIONS MEMBRES
 * 
 * Déclaration
 * void (ClassName::*pointerName)(void)
 * 
 * Initialisation
 * ptr = &Harl::debug;
 * 
 * Appel
 * (this->*ptr)();  // depuis l'intérieur de la classe
 * (object.*ptr)(); // depuis l'extérieur avec un objet
 * 
 */