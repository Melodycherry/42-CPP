/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:49 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/11 12:03:35 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define	WEAPON_HPP

#include <string>

class Weapon{

	private:
	std::string type;

	public:
	Weapon(std::string type);
	~Weapon();

	const std::string &getType() const;
	void setType(const std::string newType);
};

#endif


/**
 * Pour le getter :
 * const pour protection du retour ( ref constante vers une string, 
 * on ne peut pas modif la string retournee par cette reference)
 * et const a la fin pour proteger l'objet.
 * Aucun attibu de l'objet ne peut etre modifiee  
 * avec const à la fin, on sait que la fonction est juste une "lecture"
 */

 /**
  * MEMO pour getter
  * Toujours const à la fin (ne modifie pas l'objet) 
  * Souvent const au début (protège le retour)
  * Toujours retour par référence (évite la copie)
  */