/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:13:11 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/12 12:58:13 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Bureaucrat::Bureaucrat(): _name("default"), _grade(150){
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy){
	if ( this != &copy){
		_grade = copy._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

std::string Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::incrementGrade(){
	// condition pour exception
	if (_grade - 1 < 1){
		throw GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::decrementGrade(){
	// condition pour exception
	if (_grade + 1 > 150){
		throw GradeTooLowException();
	}
	_grade++;
}

/* *************************************************** */
/*  Exception class                                    */
/* *************************************************** */

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low.";
}

/* *************************************************** */
/*  Other functions                                    */
/* *************************************************** */

// overload operator
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return out;
}