/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:01:01 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/15 19:59:01 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>


int main() {

	std::cout << "=== TEST 1: Constructeur vide ===" << std::endl;
    {
        Array<int> empty;
        std::cout << "Taille tableau vide: " << empty.size() << std::endl;
        // Attendu: 0
    }

    std::cout << "\n=== TEST 2: Constructeur avec taille ===" << std::endl;
    {
        Array<int> arr(5);
        std::cout << "Taille: " << arr.size() << std::endl;
        // Attendu: 5
        
        // Vérifier initialisation par défaut
        std::cout << "Valeur arr[0] (doit être 0): " << arr[0] << std::endl;
        std::cout << "Valeur arr[4] (doit être 0): " << arr[4] << std::endl;
    }

    std::cout << "\n=== TEST 3: Modification des éléments ===" << std::endl;
    {
        Array<int> arr(3);
        arr[0] = 42;
        arr[1] = 100;
        arr[2] = 999;
        
        std::cout << "arr[0] = " << arr[0] << std::endl;
        std::cout << "arr[1] = " << arr[1] << std::endl;
        std::cout << "arr[2] = " << arr[2] << std::endl;
        // Attendu: 42, 100, 999
    }

    std::cout << "\n=== TEST 4: Copie profonde (deep copy) ===" << std::endl;
    {
        Array<int> original(3);
        original[0] = 10;
        original[1] = 20;
        original[2] = 30;
        
        Array<int> copie(original);  // Constructeur de copie
        
        std::cout << "Avant modification:" << std::endl;
        std::cout << "original[0] = " << original[0] << std::endl;
        std::cout << "copie[0] = " << copie[0] << std::endl;
        
        copie[0] = 999;  // Modifier la copie
        
        std::cout << "Après modification de copie[0]:" << std::endl;
        std::cout << "original[0] = " << original[0] << " (doit rester 10)" << std::endl;
        std::cout << "copie[0] = " << copie[0] << " (doit être 999)" << std::endl;
    }

    std::cout << "\n=== TEST 5: Opérateur d'affectation ===" << std::endl;
    {
        Array<int> arr1(2);
        arr1[0] = 111;
        arr1[1] = 222;
        
        Array<int> arr2(5);
        arr2 = arr1;  // Opérateur =
        
        std::cout << "arr2.size() après affectation: " << arr2.size() << std::endl;
        std::cout << "arr2[0] = " << arr2[0] << std::endl;
        std::cout << "arr2[1] = " << arr2[1] << std::endl;
        
        arr2[0] = 777;
        std::cout << "Après arr2[0] = 777:" << std::endl;
        std::cout << "arr1[0] = " << arr1[0] << " (doit rester 111)" << std::endl;
    }

    std::cout << "\n=== TEST 6: Exception hors limites ===" << std::endl;
    {
        Array<int> arr(3);
        try {
            std::cout << "Tentative d'accès à arr[10]..." << std::endl;
            arr[10] = 42;
            std::cout << "ERREUR: Pas d'exception catch" << std::endl;
        } catch (std::exception& e) {
            std::cout << "Exception catched: " << e.what() << std::endl;
        }
    }

    std::cout << "\n=== TEST 7: Avec d'autres types ===" << std::endl;
    {
        // Test avec float
        Array<float> floatArr(2);
        floatArr[0] = 3.14f;
        floatArr[1] = 2.71f;
        std::cout << "float: " << floatArr[0] << ", " << floatArr[1] << std::endl;
        
        // Test avec std::string
        Array<std::string> strArr(2);
        strArr[0] = "Hello";
        strArr[1] = "World";
        std::cout << "string: " << strArr[0] << " " << strArr[1] << std::endl;
    }

	return 0;
}