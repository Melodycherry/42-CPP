/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 23:30:54 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/08 23:46:53 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
	// stuff
	// private string attribute name

	public:
	// constructors and destructor
	Zombie(void);
	~Zombie(void);
	
	//stuff
	// member function void announce
	void	announce( void );
	
	// then. implement 2 functions :
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );
	
};

#endif

// "you have to determine in which case it is better to allocate zombie on the stack or on the heap" 
// check that , les diff et comment implementer 