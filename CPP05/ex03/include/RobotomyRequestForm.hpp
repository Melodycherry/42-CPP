/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:47:36 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 14:54:11 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

/**
 * @brief • RobotomyRequestForm: Required grades: sign 72, exec 45
 * Makes some drilling noises, then informs that <target> has been robotomized successfully 50% of the time. 
 * Otherwise, it informs that the robotomy failed.
 * take only one parameter in their constructor: the target of the form.
 */

class RobotomyRequestForm : public AForm {
	
	private:
		std::string _target;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();   
		
		void execute(const Bureaucrat& b) const;
};

#endif