/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:40:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/09 15:59:42 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook{

	private:
	Contact	contacts[8];
	int		numContacts;
	int		index;

	// Fonctions utiles 
	bool	isEmptyOrSpaces(const std::string &str) const;
	bool	isValidName(const std::string &str) const;
	bool	isValidPhoneNumber(const std::string &str) const;
	std::string truncateString(const std::string &str) const;

	public:
	PhoneBook(void);
	~PhoneBook(void);

	// Fonctions principales 
	void	addContact(void);
	void	displayContacts(void);
	void	searchContact(void);
};

#endif
