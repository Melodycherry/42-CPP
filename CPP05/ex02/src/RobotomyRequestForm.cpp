/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:52:18 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 15:40:12 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("Unknown"){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), _target(copy._target){
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy){
	if ( this != &copy){
		AForm::operator=(copy);
		_target=copy._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void RobotomyRequestForm::execute(const Bureaucrat& b) const{
	if (!getIsSigned())
		throw AForm::FormNotSignedException();
	if (b.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
		
	std::cout << "*** Driling noise *** " << std::endl;
	
	// successful 50 % of the time
	if (rand() % 2 == 0) // fonction pour generer un nombre aléatoire
		std::cout << _target << " : has been robotomized." << std::endl;
	else
		std::cout << _target << " : Robotomy failed." << std::endl;
}