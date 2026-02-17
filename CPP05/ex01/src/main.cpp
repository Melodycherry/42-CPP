/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:13:14 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/12 13:06:36 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	std::cout << "\n----- TEST 1 : Creating Bureaucrat -----" << std::endl;
	Bureaucrat BossLady("Boss Lady", 1);
	Bureaucrat CorporateBitch("Corporate bitch", 60);
	Bureaucrat RandomGuy("Random Guy", 149);
	std::cout << BossLady << std::endl;
	std::cout << CorporateBitch << std::endl;
	std::cout << RandomGuy << std::endl;

	std::cout << "\n----- TEST 2 : Creating forms -----" << std::endl;
	Form StupidForm("'Stupid Form'", 50, 50);
	std::cout << StupidForm << std::endl;
	Form UselessForm("'Useless Form'", 70, 70);
	std::cout << UselessForm << std::endl;
	
	std::cout << "\n----- TEST 3 : Form successfully signed -----" << std::endl;
	BossLady.signForm(StupidForm);
	CorporateBitch.signForm(UselessForm);
	
	std::cout << "\n----- TEST 4 : Fail to sign form -----" << std::endl;
	CorporateBitch.signForm(StupidForm);
	RandomGuy.signForm(StupidForm);
	RandomGuy.signForm(UselessForm);
	std::cout << std::endl;
	
    return 0;
}
