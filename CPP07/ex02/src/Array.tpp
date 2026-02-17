/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:22:25 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/16 10:30:51 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/* *************************************************** */
/*  Constructors, destructor, and assignment operator  */
/* *************************************************** */ 

template <typename T>
// Construction with no parameter: Creates an empty array.
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
// Construction with unsigned int as a parameter n: Creates an array of n elements initialized by default.
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}

template <typename T>
// Construction by copy 
// In both cases, modifying either the original array or its copy after copying musn’t affect the other array.
Array<T>::Array(const Array& copy) : _array(new T[copy._size]()), _size(copy._size) {
	for (unsigned int i = 0; i < _size; ++i) {
		_array[i] = copy._array[i];
	}
}

template <typename T>
// copy assignment operator
// In both cases, modifying either the original array or its copy after copying musn’t affect the other array.
Array<T>& Array<T>::operator=(const Array& copy) {
	// verif
	if (this != &copy) {
		delete[] _array;
		_size = copy._size;
		_array = new T[_size]();
		// boucle pour copier les elements
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = copy._array[i];
		}
	}
	return *this;
}

template <typename T>
// Destruction: with delete[] to free the allocated memory for the array elements.
Array<T>::~Array() {
	delete[] _array;
}

/* *************************************************** */
/*  Member functions                                   */
/* *************************************************** */

// operator[] for element access.
template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size) {
		throw OutOfBoundsException();
	}
	return _array[index];
}

// const version of operator[] for read-only access.
template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _size) {
		throw OutOfBoundsException();
	}
	return _array[index];
}

/**
 * @brief A member function size() that returns the number of elements in the array. 
 * This member function takes no parameters and must not modify the current instance.
 * @return unsigned int 
 */
template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &arr){
	unsigned int i = 0;
	while (i < arr.size()) {
		out << arr[i] << " ";
		i++;
	}
	return out;
}

/**
 * @note INITIALISATION PAR DEFAUT
 * Sans initialisation (valeurs indéterminées)
 * T* arr = new T[n];
 * Avec initialisation par défaut (RECOMMANDÉ)
 * T* arr = new T[n](); // LES PARENTHESES SONT ESSENTIELLES POUR L'INITIALISATION PAR DÉFAUT
 * Les parenthèses () déclenchent une initialisation par valeur (value initialization) :
 * - int, float, etc. sont initialisés à 0
 * - les pointeurs sont initialisés à nullptr
 * - les char sont initialisés à '\0'
 * - les string sont initialisées à une chaîne vide ""
 * - les bool sont initialisés à false
 * - class / struct sont initialisés en appelant leur constructeur par défaut
 */