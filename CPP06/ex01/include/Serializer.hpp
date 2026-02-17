/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:11:03 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/15 14:39:31 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>
#include <stdint.h> // pour uintptr_t (compatible avec -std=c++98)

class Serializer{

	private:
		Serializer();
		Serializer(const Serializer& copy);
		Serializer& operator=(const Serializer& copy);
		~Serializer();
		
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif

/**
 * @brief SERIALISATION 
 * processus de convertir des données (comme un pointeur) 
 * en un format qui peut être stocké ou transmis. 
 * Ici, on convertit un pointeur en nombre entier.
 * 
 * uintptr_t : type entier non signé assez grand pour stocker adresse memoire
 * ( va stocker le pointeur ) . Vient de <cstdint>
 * 
 * reinterpret_cast : operateur de conversion pour convertir entre pointeurs et entiers
 */
