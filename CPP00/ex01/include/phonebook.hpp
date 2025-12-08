/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:40:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/08 23:21:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

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
