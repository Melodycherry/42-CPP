/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:41:43 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/12 13:03:59 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150){
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){
}

Form& Form::operator=(const Form& copy){
	if (this != &copy){
		_isSigned = copy._isSigned;
	}
	return *this;
}

Form::~Form(){
}

/* *************************************************** */
/*  Getters                                            */
/* *************************************************** */

std::string Form::getName() const{
	return _name;
}

bool Form::getIsSigned() const{
	return _isSigned;
}

int Form::getGradeToSign() const{
	return _gradeToSign;
}

int Form::getGradeToExecute() const{
	return _gradeToExecute;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void Form::beSigned(const Bureaucrat& b){
	if (b.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

/* *************************************************** */
/*  Exception class                                    */
/* *************************************************** */

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low.";
}

/* *************************************************** */
/*  Other functions                                    */
/* *************************************************** */

std::ostream& operator<<(std::ostream& out, const Form& f) {
	out << "Form " << f.getName() << ", grade to sign: " << f.getGradeToSign() << ", grade to execute: " << f.getGradeToExecute() << ".";
	return out;
}

