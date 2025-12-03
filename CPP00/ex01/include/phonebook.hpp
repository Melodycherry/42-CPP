/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:40:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/03 18:45:24 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

// creation de la classe phonebook

class PhoneBook{

	private:
	Contact	contacts[8];
	int		numContacts;
	int		index;

	public:
	// constructeur et destructeur again 
	PhoneBook(void);
	~PhoneBook(void);

	// fonctions 

	void	addContact(void);
	void	displayContacts(void);
	void	searchContact(void);

	//TEST
	void	test(void);
};

#endif
