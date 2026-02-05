/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:02 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/05 15:02:01 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define	ANIMAL_HPP

#include "Brain.hpp"
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
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
		
		virtual Brain* getBrain() const { return NULL; }
	
};

#endif

/**
 * @brief getBrain()
 * Pour polymorphisme sur cette fonction
 * Toutes les classes derivees de Animal ne possedent pas forcement un brain
 * Dog et cat ont un brain, mais animal de base non
 * Donc pour cet exo, version par defaut : Un Animal générique n’a pas de cerveau → je retourne NULL
 * Ici on peut qd meme instancier Animal ( voir pure virtuelle a l'exercice suivant)
 * et qd c'est dog ou cat acceder au brain
 */

 /**
  * Destructeur virtuel
  * il va appeler animal, mais pas dog
  * donc dangereux car si dog contient des ressources ( un brain )
  * dog ne sera jamais delete, et fuite de memoire
  * donc sans desctructeur virtuel : destruction partielle juste la classe mere
  * avec virutal = enfant puis parent
  * si une classe est faite pour etre heritee, tjrs destructeur virtuel 
  * 
  */