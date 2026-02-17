/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_fonctions.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:34:10 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/14 13:43:45 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_FONCTIONS_HPP
#define TEMPLATE_FONCTIONS_HPP

// Templates must be defined in the header files.

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	else if (a == b)
		return b;
	else
		return b;
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	else if (a == b)
		return b;
	else
		return b;
}

#endif

/**
 * @note TEMPLATE
 * Pour les fonctions template, il est nécessaire de les définir dans le même fichier que leur déclaration, 
 * le prototype ET la définition d'une fonction template doivent obligatoirement se trouver dans un fichier d'en-tête.
 * ref : https://openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7533236-creez-des-templates
 * 
 * Et on doit le repeter pour chaque fonction
 * Parce que template <typename T> n’est pas un “mode” qui reste actif pour tout le fichier.
 * C’est une intro qui s’applique uniquement à ce qui suit immédiatement (la fonction / classe).
 * 
 * Si on a une classe template, on doit mettre template<typename T> avant chaque définition de méthode aussi.
 * ds le hpp et dans le cpp as well
 */