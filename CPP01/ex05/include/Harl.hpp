/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:57:06 by mlaffita          #+#    #+#             */
/*   Updated: 2026/01/11 12:15:42 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
	
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	
	public:
	
	Harl();
	~Harl();
	
	void complain(std::string level);
};

#endif
