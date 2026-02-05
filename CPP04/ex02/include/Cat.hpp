/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:05 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:41:50 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* _brain;
		
	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		~Cat();

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
 * donc -> methode publique qui donne acces controlé a l'attribut privé _brain
 */