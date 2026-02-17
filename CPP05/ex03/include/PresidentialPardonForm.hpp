/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:48:12 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 12:20:41 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

/**
 * @brief • PresidentialPardonForm: Required grades: sign 25, exec 5 
 * Informs that <target> has been pardoned by Zaphod Beeblebrox.
 * take only one parameter in their constructor: the target of the form.
 */

class PresidentialPardonForm : public AForm {
	
	private:
		std::string _target;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
		~PresidentialPardonForm();
	
		void execute(const Bureaucrat& b) const;
};

#endif