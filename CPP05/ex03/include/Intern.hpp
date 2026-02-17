/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:03:06 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 17:21:46 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	
	private:
	// on creer un tableau de pointeur de fonctions
	AForm* makeShrubberyCreation(std::string target);
	AForm* makeRobotomyRequest(std::string target);
	AForm* makePresidentialPardon(std::string target);

	public:
	Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& copy);
	~Intern();
	
	AForm* makeForm(std::string name, std::string target);
};

#endif