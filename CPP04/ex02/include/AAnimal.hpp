/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:48:02 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:41:37 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define	AANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string _type;
	
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal (const AAnimal& copy);
		AAnimal& operator=(const AAnimal& copy);
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0 ; // ici la seule modif
		
		virtual Brain* getBrain() const { return NULL; }
	
};

#endif

/**
 * La classe Animal devient abstraite
 * Si on ajoute = 0 a au moins une fonction virtuelle,
 * cela devient une fonction virtuelle pure
 * La classe ne peut plus etre instanciée
 * 
 * Donc la classe mere ne deifni pas cette fonction, mais impose aux enfants de la definir
 * Soit : animal ne fait pas de son par defaut, donc chaque animal concret DOIT definir cette fonction
 */

  /**
  * La difference entre virtual et pure virtual
  * Virtual = enfant PEUT override mais pas obligé
  * Virtual pure = enfant DOIT override sinon reste abstrait
  * 
  */