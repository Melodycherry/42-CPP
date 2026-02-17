/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:12:53 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 11:22:35 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat{
	private:
		const std::string 	_name;
		int 				_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();

		// GETTER :
		std::string getName() const;
		int 		getGrade() const;

		// MEMBER FUNCTIONS	:
		void incrementGrade();
		void decrementGrade();

		// ajout pour le form
		void signForm(Form& f) const;
		
		// EXCEPTION CLASSE 
		class GradeTooHighException : public std::exception{
			public :
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception{
			public:
			virtual const char* what() const throw();
		};
		
	};
	
	std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);
	
#endif
