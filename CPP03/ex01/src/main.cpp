/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:40:10 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/22 14:17:08 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	
	std::cout << "=== TEST 1: Construction chaining ===" << std::endl;
    ScavTrap scav1("Guardian");
    std::cout << std::endl;

    std::cout << "=== TEST 2: ScavTrap attacks (20 damage) ===" << std::endl;
    scav1.attack("Enemy");
    std::cout << std::endl;

    std::cout << "=== TEST 3: Guard Gate ===" << std::endl;
    scav1.guardGate();
    std::cout << std::endl;

    std::cout << "=== TEST 4: Taking damage ===" << std::endl;
    scav1.takeDamage(30);
    scav1.takeDamage(50);
    std::cout << std::endl;

    std::cout << "=== TEST 5: Repair ===" << std::endl;
    scav1.beRepaired(25);
    std::cout << std::endl;

    std::cout << "=== TEST 6: Copy constructor chaining ===" << std::endl;
    ScavTrap scav2(scav1);
    std::cout << std::endl;

    std::cout << "=== TEST 7: Assignment operator ===" << std::endl;
    ScavTrap scav3("Temp");
    scav3 = scav1;
    std::cout << std::endl;

    std::cout << "=== TEST 8: Destruction chaining (reverse order) ===" << std::endl;
    return 0;
}

/**
 * Construteur ClapTrap d'abord, puis ScavTrap 
 * 
 * MAIS pour la destruction, l'inverse
 * destructeur de scavtrap d'abord, pour nettoyer ce qui a été alloué dans scavtrap
 * puis destructeur de claptrap, pour nettoyer la partie héritée
 * 
 * Pour la construction, Claptrap doit exister
 * avant que scavtrap puisse etre construit par dessus
 * 
 */