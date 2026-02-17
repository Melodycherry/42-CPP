/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:06:25 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/16 10:16:24 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <cstddef> // for size_t

/**
 * @brief Implement a function template iter that takes 3 parameters and returns nothing
 * • The first parameter is the address of an array.
 * • The second one is the length of the array, passed as a const value.
 * • The third one is a function that will be called on every element of the array.
 * 
 * @note Your iter function template must work with any type of array. 
 * The third parameter can be an instantiated function template.
 * The function passed as the third parameter may take its argument 
 * by const reference or non-const reference, depending on the context.
 */

template <typename T, typename Func>
void iter(T* array, const size_t length, Func f)
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

// Ne pas faire 2 fonctions
// si T est const int, alors array[i] est const int&
// si T est int, alors array[i] est int&
// la fonction f recevra la ref appropriee selon le type de T
// ref : blucken


#endif