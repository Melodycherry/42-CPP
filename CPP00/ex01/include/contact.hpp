/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:48:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/02 19:24:33 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

// class commencent par majuscule !!

class Contact {
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	public:
	// trucs public 
	// truc de constructeur / destructeur a mettre au debu t?
	Contact();
	~Contact();

	// la liste des fonctions membres ( getters et setters) ?? 

	// setter permet d'enregistrer les donnees du contact
	// sert a enrehistre ds les truc prives, donc ne retourne RIEN. Tout void
	void	setFirstName(const std::string &fname);
	void	setLastName(const std::string &lname);
	void	setNickName(const std::string &nname);
	void	setPhoneNumber(const std::string &pnumber);
	void	setDarkestSecret(const std::string &dsecret);

	// getter permets d'afficher les donnees du contact
	// il va recup et lire le truc prive donc il retoourne une string
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	
	// le const des methodes se met apres les parentheses
	// empeche de modifier l'objet

};

#endif

