/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:15:35 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/14 10:43:29 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

// Pas class, juste struct pour stocker des données
// subject dit " non-empty (meaning it has data members") donc pluriel 

struct Data{
	int id;
	std::string name;
};


#endif