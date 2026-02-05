/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:29:53 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/29 13:57:53 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
	std::cout << "=== TEST 1: Construction ===" << std::endl;
    ClapTrap clap1("Robot");
    std::cout << std::endl;

    std::cout << "=== TEST 2: Attaques normales ===" << std::endl;
    clap1.attack("Bandit");
    clap1.attack("Zombie");
    clap1.attack("Monster");
    std::cout << std::endl;

    std::cout << "=== TEST 3: Réparation ===" << std::endl;
    clap1.beRepaired(5);
    clap1.beRepaired(3);
    std::cout << std::endl;

    std::cout << "=== TEST 4: Prendre des dégâts ===" << std::endl;
    clap1.takeDamage(3);
    clap1.takeDamage(2);
    std::cout << std::endl;

    std::cout << "=== TEST 5: Épuisement de l'énergie ===" << std::endl;
    ClapTrap clap2("EnergyBot");
    for (int i = 0; i < 12; i++) {
        clap2.attack("Target");
    }
    std::cout << std::endl;

    std::cout << "=== TEST 6: Mourir puis essayer d'agir ===" << std::endl;
    ClapTrap clap3("Fragile");
    clap3.takeDamage(15);  // Plus que les HP disponibles
    clap3.attack("Enemy"); // Ne devrait pas pouvoir attaquer
    clap3.beRepaired(5);   // Ne devrait pas pouvoir se réparer
    std::cout << std::endl;

	std::cout << "=== TEST 7: Constructeur de copie ===" << std::endl;
	ClapTrap clap4("Original");
	clap4.attack("Test");
	ClapTrap clap5(clap4);
	std::cout << "Both ClapTraps now have the same name 'Original'" << std::endl;
	clap5.attack("Copy Test");
	std::cout << std::endl;

    std::cout << "=== TEST 8: Opérateur d'affectation ===" << std::endl;
    ClapTrap clap6("First");
    ClapTrap clap7("Second");
    clap7 = clap6;
    clap7.attack("Assignment Test");
    std::cout << std::endl;

    std::cout << "=== TEST 9: Destruction (automatic) ===" << std::endl;
	return 0;
}
