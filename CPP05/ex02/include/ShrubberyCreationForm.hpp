/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:47:17 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 15:19:57 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

/**
 * @brief ShrubberyCreationForm: Required grades: sign 145, exec 137
 * Creates a file <target>_shrubbery in the working directory and writes ASCII trees inside it.
 * take only one parameter in their constructor: the target of the form.
 */

class ShrubberyCreationForm : public AForm {
	
	private:
		std::string _target;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();
		
		void execute(const Bureaucrat& b) const;
};

#endif