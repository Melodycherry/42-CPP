/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:57:26 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/04 17:41:45 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain (const Brain& copy);
		Brain& operator=(const Brain& copy);
		~Brain();

		std::string getIdea(int index) const;
		void		setIdea(int index, std::string idea);
};

#endif