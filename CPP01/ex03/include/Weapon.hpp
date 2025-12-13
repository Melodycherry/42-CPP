/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:49 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 20:41:41 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define	WEAPON_HPP

#include <string>

class Weapon{

	private:
	std::string type;

	public:
	Weapon(std::string type);
	~Weapon();

	//getter
	// getType() that return constante reference to type
	
	//setter
	// setType() that sets type using the new value passed as parameter

};

#endif