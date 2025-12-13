/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:54 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 14:14:45 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	
	private:
	std::string name;
	
	public:
	Zombie(void); // Constructeur par defaut
	Zombie(std::string name);
	~Zombie(void);
	
	void	announce(void);
	void	setName(std::string name);
};

#endif
