/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:59:15 by mlaffita          #+#    #+#             */
/*   Updated: 2025/12/13 17:25:17 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "And ..." << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    
    return 0;
}

/**
 * A string variable initialized to "HI THIS IS BRAIN".
 * stringPTR: a pointer to the string.
 * stringREF: a reference to the string.
 * 
 * PRINT
 * The memory address of the string variable.
 * The memory address held by stringPTR.
 * The memory address held by stringREF.
 * 
 * AND
 * The value of the string variable.
 * The value pointed to by stringPTR.
 * The value pointed to by stringREF.
 */