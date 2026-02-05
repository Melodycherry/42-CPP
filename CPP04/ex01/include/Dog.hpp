/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:08 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:24:20 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	
	public:
		Dog();
		Dog(const Dog& copy); // deep copy de _brain
		Dog& operator=(const Dog& copy); // ici aussi
		~Dog();

		void makeSound() const;
		Brain* getBrain() const;
};

#endif

/** 
 * getBrain est un getter
 * pour acceder a _brain deouis l'exterieur de la classe
 * va permettre de tester la deep cpy
 * modif les idees ( set ideas )
 * et lire les idees ( get ideas)
 * donc -> methode publique qui donne acces controléa l'attribut privé _brain
 */