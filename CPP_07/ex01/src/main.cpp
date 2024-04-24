/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:47:42 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/24 17:06:42 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
    std::cout << "\t\t\t\t\t TEST OF ITER " << std::endl;
    // Définition de deux tableaux : un tableau d'entiers et un tableau de caractères
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Appel de la fonction iter avec print pour afficher les éléments du tableau d'entiers
    std::cout << "Printing intArray:" << std::endl;
    iter<int, int, void(*)(int&)>(intArray, 5, print<int&>);

    // Appel de la fonction iter avec print pour afficher les éléments du tableau de caractères
    std::cout << "Printing charArray:" << std::endl;
    iter(charArray, 5, print<char>);

    // Test avec un tableau nul (qui va déclencher une exception)
    int* nullArray = NULL;
    std::cout << "Printing nullArray:" << std::endl;
    iter(nullArray, 5, print<int>); // Cette ligne devrait déclencher une exception

    return (0);
}

