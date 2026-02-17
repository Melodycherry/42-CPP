/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:13:14 by mlaffita          #+#    #+#             */
/*   Updated: 2026/02/08 16:37:11 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    std::cout << "----- TEST 1 : Creation OK -----" << std::endl;
    try
    {
        Bureaucrat b("Melody", 42);
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TEST 2 : Grade too high (constructor) -----" << std::endl;
    try
    {
		std::cout << "Creating Bureaucrat Boss with grade 0" << std::endl;
        Bureaucrat b("Boss", 0);
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TEST 3 : Grade too low (constructor) -----" << std::endl;
    try
    {
		std::cout << "Creating Bureaucrat intern with grade 151" << std::endl;
        Bureaucrat b("Intern", 151);
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TEST 4 : Increment grade OK -----" << std::endl;
    try
    {
        Bureaucrat b("Accoutant", 2);
        std::cout << b << std::endl;

        b.incrementGrade();
        std::cout << "After increment: " << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TEST 5 : Increment grade throws -----" << std::endl;
    try
    {
        Bureaucrat b("Human Ressources", 1);
        std::cout << b << std::endl;
		
		std::cout << "Incrementing " << b << std::endl;
        b.incrementGrade(); // should throw
        std::cout << "After increment: " << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TEST 6 : Decrement grade OK -----" << std::endl;
    try
    {
        Bureaucrat b("Admin guy", 149);
        std::cout << b << std::endl;

        b.decrementGrade();
        std::cout << "After decrement: " << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- TEST 7 : Decrement grade throws -----" << std::endl;
    try
    {
        Bureaucrat b("Back office guy", 150);
        std::cout << b << std::endl;

		std::cout << "Decrementing " << b << std::endl;
        b.decrementGrade(); // should throw
        std::cout << "After decrement: " << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

/**
 * TRY AND CATCH BLOCKS
 * En c++ le try and catch permet de gerer les erreurs (exception) sans faire crash le programme
 * donc TRY code dangereux, et CATCH gestion de l'erreur
 * Ds le bloc TRY on va mettre qqchose qui peut echouer 
 * Si une erreur survient et qu’une exception est "lancée" (throw), le programme saute directement dans le catch
 * CATCH recup' l'erreur et permet de gerer proprement ( affichage de mess, quitter de maniere clean ...)
 * Dès que throw est exécuté, tout le reste du try est ignoré
 * 
 * std::exception & e
 * C'est la classe de base de beaucoup d'exceptions en C++
 * On met tjrs & pour eviter de perdre le type de l'exception
 * On peut meme mettre const pour ne pas modifier l'erreur
 * 
 * Mémo:
 * try = "je tente ce code"
 * throw = "j’ai un problème, je lance une exception"
 * catch = "si une exception arrive, je la récupère ici"
 */