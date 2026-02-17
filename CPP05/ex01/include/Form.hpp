/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:41:39 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 11:22:07 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form{
	private:
		const std::string 	_name;
		bool 				_isSigned;
		const int 			_gradeToSign;
		const int 			_gradeToExecute;

	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		~Form();

		// GETTER : 
		std::string getName() const;
		bool 		getIsSigned() const;
		int 		getGradeToSign() const;
		int 		getGradeToExecute() const;
		
		// MEMBER FUNCTIONS :
		void 		beSigned(const Bureaucrat& b);

		// EXCEPTION CLASSES :
		class GradeTooHighException : public std::exception{
			public :
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif