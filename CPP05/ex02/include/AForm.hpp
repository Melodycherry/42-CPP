/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:41:39 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 15:19:22 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm{
	private: // have to remain private 
		const std::string 	_name;
		bool 				_isSigned;
		const int 			_gradeToSign;
		const int 			_gradeToExecute;

	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
		virtual ~AForm(); // !!! le sdestruct VIRTUEL 

		// GETTER : 
		std::string getName() const;
		bool 		getIsSigned() const;
		int 		getGradeToSign() const;
		int 		getGradeToExecute() const;
		
		// MEMBER FUNCTIONS :
		void 		beSigned(const Bureaucrat& b);
		virtual void execute(const Bureaucrat& b) const = 0; // fonction virtual ici, makes it abstract class

		// EXCEPTION CLASSES :
		class GradeTooHighException : public std::exception{
			public :
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
			virtual const char* what() const throw();
		};

		class FormNotSignedException : public std::exception{
			public:
			virtual const char* what() const throw();
		};

		class FormAlreadySignedException : public std::exception{
			public:
			virtual const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif