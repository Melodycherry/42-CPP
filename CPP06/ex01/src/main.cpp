/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:11:20 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/15 14:39:27 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>
#include <stdint.h>


int main ()
{
	Data original; // on cree un objet qui contient TOUT ( id et name etc ...)
    original.id = 42;
    original.name = "Test";
    
	std::cout << "\nAvant - Adresse: " << &original << std::endl; // donc ici c'est l'adress de l'obj Original
    std::cout << "Avant - id: " << original.id << ", name: " << original.name << std::endl;
    

    // Sérialiser : pointeur → nombre
    uintptr_t raw = Serializer::serialize(&original);
	std::cout << "Sérialisé en: " << raw << std::endl;
	std::cout << std::endl;
    
    // Désérialiser : nombre → pointeur
    Data* ptr = Serializer::deserialize(raw);

	std::cout << "Après - Adresse: " << ptr << std::endl;
    std::cout << "Après - id: " << ptr->id << ", name: " << ptr->name << std::endl;
    std::cout << std::endl;
	
    // Vérifier que c'est le même pointeur
    if (ptr == &original)
        std::cout << "Pointeurs identiques : Success" << std::endl;
	else
		std::cout << "Pointeurs identiques : Failure" << std::endl;

	if (ptr->id == 42 && ptr->name == "Test")
        std::cout << "✓ Les données sont intactes" << std::endl;
	else
		std::cout << "✗ Les données ont été modifiees" << std::endl;
		
	return 0;	
}

/**
 * @brief Ce programme teste la sérialisation et désérialisation d'un pointeur vers une structure Data.
 * Il crée une instance de Data, la sérialise en un entier, puis la désérialise pour récupérer le pointeur d'origine.
 * Il vérifie que le pointeur désérialisé est identique à l'original et que les données sont intactes.
 * Le programme utilise les fonctions serialize et deserialize de la classe Serializer pour effectuer les conversions.
 * Le résultat attendu est que les adresses avant et après la désérialisation soient les mêmes, 
 * et que les données (id et name) soient inchangées.
 */

 // donc ici on manipule des adresses mémoires comme des nombres entiers
 // un seul objet donc une seule adresse 