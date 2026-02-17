/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:41:43 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 14:51:07 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150){
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){
}

AForm& AForm::operator=(const AForm& copy){
	if (this != &copy){
		_isSigned = copy._isSigned;
	}
	return *this;
}

AForm::~AForm(){
}

/* *************************************************** */
/*  Getters                                            */
/* *************************************************** */

std::string AForm::getName() const{
	return _name;
}

bool AForm::getIsSigned() const{
	return _isSigned;
}

int AForm::getGradeToSign() const{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const{
	return _gradeToExecute;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void AForm::beSigned(const Bureaucrat& b){
	if (b.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_isSigned = true;
}

/* *************************************************** */
/*  Exception class                                    */
/* *************************************************** */

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low.";
}

const char* AForm::FormNotSignedException::what() const throw(){
	return "Form not signed.";
}

const char* AForm::FormAlreadySignedException::what() const throw(){
	return "Form already signed.";
}

/* *************************************************** */
/*  Other functions                                    */
/* *************************************************** */

std::ostream& operator<<(std::ostream& out, const AForm& f) {
	out << "Form " << f.getName() << ", grade to sign: " << f.getGradeToSign() << ", grade to execute: " << f.getGradeToExecute() << ".";
	return out;
}

