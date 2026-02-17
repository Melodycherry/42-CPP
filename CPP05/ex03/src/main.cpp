/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:13:14 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 17:33:13 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ctime>
#include <sstream>

int main ()
{
	std::cout << "\nForms that can be created :" << std::endl;
	std::cout << "ShrubberyCreation, RobotomyRequest, PresidentialPardon\n" << std::endl;
	
	Intern underpaidSlave;
	AForm* randomForm;

	std::cout << "\n----- FORM 1 :-----" << std::endl;
	randomForm = underpaidSlave.makeForm("ShrubberyCreation", "Garden");
	if (randomForm){
		std::cout << *randomForm << std::endl;
		delete randomForm;
	}

	std::cout << "\n----- FORM 2 :-----" << std::endl;
	randomForm = underpaidSlave.makeForm("RobotomyRequest", "Wall-e");
	if (randomForm){
		std::cout << *randomForm << std::endl;
		delete randomForm;
	}

	std::cout << "\n----- FORM 3 :-----" << std::endl;
	randomForm = underpaidSlave.makeForm("PresidentialPardon", "Criminal");
	if (randomForm){
		std::cout << *randomForm << std::endl;
		delete randomForm;
	}

	std::cout << "\n----- FORM 4 :-----" << std::endl;
	randomForm = underpaidSlave.makeForm("Wrong form", "something");
	if (randomForm){
		std::cout << *randomForm << std::endl;
		delete randomForm;
	}
	
	return 0;
}
