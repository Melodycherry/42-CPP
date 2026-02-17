/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:06:27 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/14 18:57:57 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

// Fonction qui prend une référence non-const
void increment(int& n){
    n++;
}

// Fonction qui prend une référence const
void print(const int& n){
    std::cout << n << " ";
}

// Template de fonction
template<typename T>
void display(const T& value){
    std::cout << value << " ";
}

int main ()
{
	// Test avec un tableau non-const
    int numbers[] = {1, 2, 3, 4, 5};
    size_t len = 5;
    
    std::cout << "Tableau initial: ";
    iter(numbers, len, print);
    std::cout << std::endl;
    
    // Modification avec fonction non-const
    iter(numbers, len, increment);
    
    std::cout << "Après increment: ";
    iter(numbers, len, print);
    std::cout << std::endl;
    
    // Test avec un tableau const
    const int const_numbers[] = {10, 20, 30};
	std::cout << "Avec tableau const: ";
    iter(const_numbers, 3, print);
    std::cout << std::endl;

    // Test avec template de fonction
    std::cout << "Avec template display: (int)" << std::endl;
    iter(numbers, len, display<int>);
	std::cout << std::endl;
    
	// Test avec des doubles
	std::cout << "Avec template display: (double)" << std::endl;
	double doubles[] = {1.5, 2.5, 3.5};
	iter(doubles, 3, display<double>);
	std::cout << std::endl;
	
    // Test avec des strings
	std::cout << "Avec template display: (string)" << std::endl;
    std::string words[] = {"Hello", "World", "!"};
    iter(words, 3, display<std::string>);
	std::cout << std::endl;
    
	return 0;
}