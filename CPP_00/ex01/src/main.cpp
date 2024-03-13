/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:52:45 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/07 19:22:43 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	repertory;
	std::string	choice;

	try
	{
		while (42)
		{
			repertory.display_menu();
			choice = repertory.get_input("Enter your choice : ", false);
			std::cout << std::endl;
			if (choice == "ADD" || choice == "Add" || choice == "add")
				repertory.add_contact(repertory.get_contact());
			else if (choice == "SEARCH" || choice == "Search" || choice == "search")
				repertory.search_contact();
			else if (choice == "EXIT" || choice == "Exit" || choice == "exit")
				break;
			else
				std::cout << "Invalid input" << std::endl << std::endl;
		}
	}
	catch(const std::runtime_error &e)
	{
		std::cerr << "\nProgram close successfully" << e.what() << std::endl;
	}

	return (0);
}
