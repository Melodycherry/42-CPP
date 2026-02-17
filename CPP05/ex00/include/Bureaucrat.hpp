/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:12:53 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/12 12:55:52 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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

		std::string getName() const;
		int 		getGrade() const;

		void incrementGrade();
		void decrementGrade();
		
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
	
	// overload operator << to print output like this :
	// <name>, bureaucrat grade <grade>.
	std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);
	
#endif

/**
 * @brief EXCEPTION CLASS
 * exception class = un type d’erreur sous forme d’objet
 * on lance avec throw
 * on recup avec catch
 * on lit le mess avec what 
 * 
 * what() est la fonction standard qui permet d'afficher un message d'erreur
 * what() doit etre noexcept car si what() lance une exception, on est deja ds une exception
 * donc ca garanti pas de crash 
 * ATTENTION : noexcept est fonctionnalité pour c++11
 * Pour c++98 on utilise just throw
 * 
 * what virtual car on va utiliser le polymorphisme
 * on va la redefinir ds les classes derivees 
 * on veut que le bon "what" soit appelé meme si on manipule l'obj via une ref vers std::exception
 * 
 * signature officielle de la fonction est : virtual const char* what() const noexcept;
 * Mais ici on change en throw car c++98
 * retoruner un const char* ( pointeur vers string en memoire ) est plus safe que faire alloc memoire pour string 
 */
