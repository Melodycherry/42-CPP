/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:52:14 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 13:22:32 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("Unknown"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), _target(copy._target){
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy){
	if (this != &copy){
		AForm::operator=(copy);
		_target = copy._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void PresidentialPardonForm::execute(const Bureaucrat& b) const{
	if (!getIsSigned())
		throw AForm::FormNotSignedException();
	if (b.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}