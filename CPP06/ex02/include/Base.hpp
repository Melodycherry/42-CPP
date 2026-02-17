/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 15:09:48 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/13 16:05:30 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

// Implement a Base class that has a public virtual destructor only

class Base{
	public:
		virtual ~Base();
};

#endif

/**
 * @brief DESTRUCTEUR VIRTUEL
 * Permet la destruction correcte des objets dérivés via un pointeur de base
 */