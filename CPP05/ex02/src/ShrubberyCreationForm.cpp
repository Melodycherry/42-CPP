/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:52:20 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 15:36:59 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("Unknown"){
} 

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137), _target(target){
} 

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), _target(copy._target){
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy){
	if ( this != &copy){
		AForm::operator=(copy);
		_target = copy._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

void ShrubberyCreationForm::execute(const Bureaucrat& b) const{
	if (!getIsSigned())
		throw AForm::FormNotSignedException();
	if (b.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();

	// create a file named <target>_shrubbery and write ASCII trees inside
	std::ofstream	outfile;
	outfile.open((_target + "_shrubbery").c_str());
	if (!outfile.is_open()){
		std::cerr << "Error: Could not create file." << std::endl;
		return;
	}
	outfile << "               .      .       .           .          "  << std::endl;
	outfile << "        .                .           .         .     "  << std::endl;
	outfile << "    .         .       .        .          .          "  << std::endl;
	outfile << "          /\\                 /\\                /\\ "      << std::endl;
	outfile << "         /**\\      /\\       /**\\      /\\      /**\\ "     << std::endl;
	outfile << "        /****\\    /**\\     /****\\    /**\\    /****\\ "    << std::endl;
	outfile << "       /******\\  /****\\   /******\\  /****\\  /******\\ "   << std::endl;
	outfile << "      /********\\/******\\ /********\\/******\\/********\\ " << std::endl;
	outfile << "          ||       ||        ||        ||      || "    << std::endl;
	outfile << "          ||       ||        ||        ||      || "    << std::endl;
	outfile << "          ||       ||        ||        ||      || "    << std::endl;
	outfile << "                                                   "    << std::endl;
	outfile << "" << std::endl;
	outfile.close();

}