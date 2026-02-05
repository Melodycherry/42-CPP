/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:57:26 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:23:05 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain (const Brain& copy); // Deep copy
		Brain& operator=(const Brain& copy); // aussi deep copy
		~Brain();

		std::string getIdea(int index) const;
		void		setIdea(int index, std::string idea);
};

#endif

/**
 * Deep copy :
 * ON copie le contenu reel d'un objet, et pas juste son adresse
 * Dc les deux objets sont independants
 * 
 * On veut eviter que 2 chiens partagent le meme brain
 * et aussi eviter les double free 
 * 
 * Ds constructeur de copie, on copie les idees une par une ( avec la boucle for )
 * Le nouveau brain a ses propres donnees
 * Et dans l'operateur meme principe 
 * 
 */