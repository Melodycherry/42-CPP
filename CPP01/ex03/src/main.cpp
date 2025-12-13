/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:59 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 21:01:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	// Main from subject 
	{
		Weapon	club = Weapon("crude sppiked club");

		HumanA bob("Bob, club");
		bob.attack();
		club.setType("some other type of club");
		bob.attack()
	}
	{
		Weapon	club = Weapon("crude sppiked club");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
	return 0;
}
