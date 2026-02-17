/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:13:14 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/11 15:49:17 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>
#include <sstream>

int main ()
{
	srand(time(NULL));
	
	std::cout << "\n----- TEST 1 : Creating Bureaucrat and form -----" << std::endl;
    try {
        Bureaucrat bosslady("Bosslady", 1);
        Bureaucrat corporatebitch("Corporate bitch", 150);
        ShrubberyCreationForm shrub("home");
        
        std::cout << bosslady << std::endl;
        std::cout << corporatebitch << std::endl;
        std::cout << shrub << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
	std::cout << "\n----- TEST 2 : Grade too low for signing -----" << std::endl;
    try {
        Bureaucrat lowGrade("LowGrade", 150);
        ShrubberyCreationForm shrub("garden");
        
        std::cout << lowGrade << std::endl;
        std::cout << shrub << std::endl;
        lowGrade.signForm(shrub);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
	std::cout << "\n----- TEST 3 : Excecuting without signing -----" << std::endl;
	try {
        Bureaucrat bosslady("Bosslady", 1);
        RobotomyRequestForm robot("Wall-e");
        
        std::cout << bosslady << std::endl;
        std::cout << robot << std::endl;
        bosslady.executeForm(robot);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
	std::cout << "\n----- TEST 4 : Signing but excecutor grade too low -----" << std::endl;
	try {
        Bureaucrat signer("Signer", 70);
        Bureaucrat executor("Executor", 50);
        RobotomyRequestForm robot("Wall-e");
        
        std::cout << signer << std::endl;
        std::cout << executor << std::endl;
        std::cout << robot << std::endl;
        
        signer.signForm(robot);
        executor.executeForm(robot);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
	std::cout << "\n----- TEST 5 : Shubbery form  -----" << std::endl;
	try {
        Bureaucrat gardener("Gardener", 100);
        ShrubberyCreationForm shrub("backyard");
        
        std::cout << gardener << std::endl;
        std::cout << shrub << std::endl;
        
        gardener.signForm(shrub);
        gardener.executeForm(shrub);
        
        std::cout << "Check the file 'backyard_shrubbery' :)" << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
	std::cout << "\n----- TEST 6 : Robotomy ( Sucess / fail) -----" << std::endl;
	try {
        Bureaucrat engineer("Engineer", 1);
        
        std::cout << engineer << std::endl;
        
        // Test multiple robotomies pour voir succès et échec
        for (int i = 0; i < 4; i++) {
            std::cout << "\n--- Attempt " << (i + 1) << " ---" << std::endl;
            std::ostringstream oss;
			oss << "Target" << (i + 1);
			RobotomyRequestForm robot(oss.str());
            engineer.signForm(robot);
            engineer.executeForm(robot);
        }
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
	std::cout << "\n----- TEST 7 : Presidential Pardon -----" << std::endl;
	try {
        Bureaucrat president("President", 1);
        PresidentialPardonForm pardon("Thanksgiving turkey");
        
        std::cout << president << std::endl;
        std::cout << pardon << std::endl;
        
        president.signForm(pardon);
        president.executeForm(pardon);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
    return 0;
}
