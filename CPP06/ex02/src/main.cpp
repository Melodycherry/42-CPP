/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 15:09:56 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/17 11:38:17 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"
#include <iostream>
#include <cstdlib> // pour rand

int main ()
{
	std::cout << "=== Test 1 ===" << std::endl;
    Base* ptr1 = generate();
    identify(ptr1);
    identify(*ptr1);
    delete ptr1;
    
    std::cout << "\n=== Test 2 ===" << std::endl;
    Base* ptr2 = generate();
    identify(ptr2);
    identify(*ptr2);
    delete ptr2;
    
    std::cout << "\n=== Test 3 ===" << std::endl;
    Base* ptr3 = generate();
    identify(ptr3);
    identify(*ptr3);
    delete ptr3;

	return 0;
}

/**
 * @note IDENTIFICATION DE TYPE
 * On ne peut pas utiliser typeinfo (pas typeid)
 * On doit utiliser dynamic_cast et verif si conversion reussi
 */

 /**
  * @note DYNAMIC CAST
  * dynamic_cast<type*>(expression)
  * permet de convertir un pointeur de base en pointeur de type dérivé
  * retoune nullptr si la conversion échoue (si l'objet pointé n'est pas du type dérivé)
  * lance une exception std::bad_cast si on utilise dynamic_cast avec des références et que la conversion échoue
  * doit être utilisé avec des classes polymorphiques (qui ont au moins une fonction virtuelle) 
  * ATTENTION ici on ne peut pas faire bad cast car ds typeinfo
  */

  /**
   * @note DIFFERENCE POINTEUR VS REFERENCE
   * Avec pointeur : test si dynamic_cast retourne nullptr pour savoir si conversion reussi ou pas
   * Avec reference : on utilise bloc try-catch pour attraper l'exception (std::bad_cast normalement) si conversion echoue
   */