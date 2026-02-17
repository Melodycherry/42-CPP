/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:11:07 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/15 14:39:30 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <stdint.h> 

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

Serializer::Serializer(){
}

Serializer::Serializer(const Serializer& copy){
	(void)copy;
}

Serializer& Serializer::operator=(const Serializer& copy){
	(void)copy;
	return *this;
}

Serializer::~Serializer(){
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

/**
 * @brief serialize : convertit un pointeur en entier
 * It takes a pointer and converts it to the unsigned integer type uintptr_t.
 * @param ptr 
 * @return uintptr_t 
 */

uintptr_t Serializer::serialize(Data* ptr){
	// reinterpret_cast pour convertir un pointeur en entier
	return reinterpret_cast<uintptr_t>(ptr);
}


/**
 * @brief deserialize : convertit un entier en pointeur
 * It takes an unsigned integer parameter and converts it to a pointer to Data.
 * @param raw 
 * @return Data* 
 */
Data* Serializer::deserialize(uintptr_t raw){
	// reinterpret_cast pour convertir un entier en pointeur
	return reinterpret_cast<Data*>(raw);
}