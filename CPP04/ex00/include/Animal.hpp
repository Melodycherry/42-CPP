/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:02 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:10:40 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define	ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
	
	public:
		Animal();
		Animal(std::string type);
		Animal (const Animal& copy);
		Animal& operator=(const Animal& copy);
		virtual ~Animal(); // destructeur virtuel

		std::string getType() const;
		virtual void makeSound() const; // fonction virtuelle 
	
};

#endif

/**
 * @brief makeSound
 * on utilise la fonction virtuelle car elle va etre overwritten par les autres animaux
 * Virtuelle ds la classe mère, et normal ds les classes heritee
 * Destructeur virtuel a chaque fois qu'on a une fonction virtuelle
 * Voir difference ds le main avec wrong cat
 */