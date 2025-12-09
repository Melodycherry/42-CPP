/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:54 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/09 18:40:55 by mlaffita         ###   ########.fr       */
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
	Zombie(void);
	~Zombie(void);
	
	void	announce( void );
	
};

#endif

// "you have to determine in which case it is better to allocate zombie on the stack or on the heap" 
// check that , les diff et comment implementer 