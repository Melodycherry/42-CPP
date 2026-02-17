/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:01:03 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/17 11:56:00 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept> 
#include <iostream> 

// Develop a class template Array that contains elements of type T 

template <typename T>
class Array{
	private:
		T* 				_array;
		unsigned int 	_size;
	
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& copy);
		~Array();

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int size() const;

		// Access out of bounds should throw an exception.
		class OutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Error :Index out of bounds";
				}
		};
};

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &arr);

#endif

/**
 * @note CLASS TEMPLATE
 * Une classe generique qui fonctionne avec n'importe quel type T
 * Donc on peut creer des array d'entiers, de floats, de strings, etc
 * On utilise template <typename T> avant de definir la classe
 * Ensuite on utilise T comme type pour les elements de l'array
 * On doit ici aussi repeter template <typename T> pour chaque fonction membre de la classe
 * 
 * On peut mettre tout dans le hpp ( declaration et implementation)
 * ou mettre l'implementation dans un fichier tpp (et l'inclure a la fin du hpp ?? )
 */