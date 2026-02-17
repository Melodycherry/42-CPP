/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:03:09 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/12 13:19:05 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Intern::Intern(){
}

Intern::Intern(const Intern& copy){
	(void)copy;
}

Intern& Intern::operator=(const Intern& copy){
	(void)copy;
	return *this;
}

Intern::~Intern(){
	
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

AForm* Intern::makeShrubberyCreation(std::string target){
	return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomyRequest(std::string target){
	return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidentialPardon(std::string target){
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target){
	// tableau de nom
	std::string tab[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};

	AForm* (Intern::*fonction[3])(std::string) = {
		&Intern::makeShrubberyCreation,
		&Intern::makeRobotomyRequest,
		&Intern::makePresidentialPardon,
	};

	// comment acceder
	for (int i = 0; i < 3 ; i++){
		if (tab[i] == formName){
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*fonction[i])(target);
		}
	}

	std::cout << "Error : Form '" << formName << "' does not exist" << std::endl;
	return NULL;
}

/**
 * meme modele que exercice HARL avec le switch
 * ici :
 * AForm* est le type de retour
 * (Intern::*fonction[3]) : tableau de 3 pointeur vers les methodes de class intern
 * (std::string) : car parametre de ces methodes
 * 
 * Pour appel d'une fonction via pointeur : (this->*fonction[i])(target)
 * this pour appeler methode via pointeur, puis pointeur de fonction, et le parametre a passer (target)
 */

/**
 * ATTENTION : 
 * La fonction make form retourne un pointeur avec NEW
 * donc on doit pas oublier de DELETE ( a faire dans le main apres appel de fonction)
 */
