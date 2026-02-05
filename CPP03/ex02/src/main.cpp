/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:24:52 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/31 18:10:26 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
  std::cout << "=== TEST 1: Construction chaining ===" << std::endl;
	FragTrap frag1("Melo");
	std::cout << std::endl;

	std::cout << "=== TEST 2: FragTrap attacks (30 damage) ===" << std::endl;
	frag1.attack("Target");
	std::cout << std::endl;

	std::cout << "=== TEST 3: High Five ===" << std::endl;
	frag1.highFivesGuys();
	std::cout << std::endl;

	std::cout << "=== TEST 4: Taking damage ===" << std::endl;
	frag1.takeDamage(40);
	std::cout << std::endl;

	std::cout << "=== TEST 5: Repair ===" << std::endl;
	frag1.beRepaired(20);
	std::cout << std::endl;

	std::cout << "=== TEST 6: Destruction chaining ===" << std::endl;
	return 0;
}