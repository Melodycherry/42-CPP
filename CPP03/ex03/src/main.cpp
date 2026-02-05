/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:38:56 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/31 18:32:51 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
	std::cout << "=== TEST 1: Construction ===" << std::endl;
	DiamondTrap diamond("Destroyer");
	std::cout << std::endl;

	std::cout << "=== TEST 2: whoAmI ===" << std::endl;
	diamond.whoAmI();
	std::cout << std::endl;

	std::cout << "=== TEST 3: Attack (from ScavTrap) ===" << std::endl;
	diamond.attack("Enemy");
	std::cout << std::endl;

	std::cout << "=== TEST 4: Guard Gate (from ScavTrap) ===" << std::endl;
	diamond.guardGate();
	std::cout << std::endl;

	std::cout << "=== TEST 5: High Five (from FragTrap) ===" << std::endl;
	diamond.highFivesGuys();
	std::cout << std::endl;

	std::cout << "=== TEST 6: Destruction ===" << std::endl;
	return 0;
}

// Main Hygie 
// int main (){
// 	std::cout << "=== Default DiamondTrap ===" << std::endl;
//     DiamondTrap d1;

//     std::cout << "\n=== Named DiamondTrap ===" << std::endl;
//     DiamondTrap d2("Eddie");

//     std::cout << "\n=== Copy DiamondTrap ===" << std::endl;
//     DiamondTrap d3(d2);

//     std::cout << "\n=== Assignment DiamondTrap ===" << std::endl;
//     DiamondTrap d4;
//     d4 = d2;

//     std::cout << "\n=== whoAmI test ===" << std::endl;
//     d2.whoAmI();

//     std::cout << "\n=== End of scope ===" << std::endl;
//     return 0;
// }