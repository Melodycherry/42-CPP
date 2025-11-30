/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:48:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/11/30 11:40:59 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class contact {
	private:
	// element prives

	public:
	// trucs public 
	
	// truc de constructeur / destructeur que je sais pas ou mettre 
	contact(void);
	~contact(void);

	// la liste des fonctions membres ( getters et setters) ?? 

};


// Creation de la classe contact 

// doit contenir les champs prives : ( que des strings)
// firstName
// lastName
// nickname
// phoneNumber
// darkestSecret

// et les methodes publiques pour definir et obtenir ces champs
// a chaque fois 1 fonction "set" par champ
// ex : void setFirstName(const std::string& fname);
// ...

// puis stocke ds les string en const ? car ca ne doit pas changer

// ATTENTION NE PAS OUBLIER ; A LA FIN DE LA CLASSE

#endif

