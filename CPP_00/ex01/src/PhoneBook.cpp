/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:30:35 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/07 19:28:08 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->_ncontact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::display_menu(void) const
{
	std::cout << std::setw(24) << std::setfill('-') << "\n";
	std::cout << "|  CHOICE OF COMMAND  |" << std::endl;
	std::cout << std::setw(24) << std::setfill('-') << "\n";
	std::cout << "| ADD | SEARCH | EXIT |" << std::endl;
	std::cout << std::setw(24) << std::setfill('-') << "\n";
	std::cout << std::setfill(' ') << std::endl;
	return ;
}

std::string	PhoneBook::get_input(const std::string prompt, const bool phone)
{
	std::string	input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
			throw std::runtime_error("");
		if (input.empty())
		{
			std::cout << "Your input must not be empty" << std::endl;
			continue ;
		}
		if (phone && !is_valid_phone(input))
		{
			std::cout << "Phone number is not formatted correctly" << std::endl;
			continue ;
		}
		return (input);
	}
}

bool	PhoneBook::is_valid_phone(const std::string input) const
{
	char	c;
	size_t	digit_count;

	digit_count = 0;
	for (size_t i = 0 ; i < input.size() ; i++)
	{
		c = input[i];
		if (std::isdigit(c))
			digit_count++;
		else if (i == 0 && c != '+')
			return (false);
		else if (c != ' ' && c != '.')
			return (false);
	}
	return (digit_count >= 10);
}

Contact	&PhoneBook::get_contact(void)
{
	int	index = this->_ncontact % 8;
	return (this->_contact_list[index]);
}

void	PhoneBook::add_contact(Contact &new_contact)
{
	new_contact. set_first_name(this->get_input("First name     : ", false));
	new_contact.set_last_name(this->get_input("Last name      : ", false));
	new_contact.set_nickname(this->get_input("Nickname       : ", false));
	new_contact.set_number(this->get_input("Phone number   : ", true));
	new_contact.set_secret(this->get_input("Darkest secret : ", false));
	std::cout << std::endl << "Contact ajoute" << std::endl << std::endl;
	this->_ncontact++;
	return ;
}

void	PhoneBook::search_contact(void)
{
	std::string	choice;
	int			id;
	bool		valid;

	valid = false;
	std::cout << "List of all your contacts : " << std::endl << std::endl;
	this->display_contact_list();
	std::cout << std::endl;
	while (valid == false)
	{
		choice = this->get_input("Choose contact : ", false);
		std::cout << std::endl;
		if (choice == "menu")
			return ;
		else if (choice.size() != 1 || !isdigit(choice[0]) || atoi(choice.c_str()) < 1 || atoi(choice.c_str()) > 8 || atoi(choice.c_str()) > this->_ncontact)
			std::cout << "Wrong index, please choose a correct index (or type menu to go back).\n" << std::endl;
		else
			valid = true;
	}
	id = atoi(choice.c_str());
	if (id >= 1 && id <= 8 )
		this->display_contact_infos(this->_contact_list[id - 1]);
	std::cout << std::endl;
}

void	print_string(std::string str) {

	std::cout << "|";
	if (str.size() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	return ;
}

void	PhoneBook::display_contact_list(void) const
{
	std::string	value;

	std::cout << std::setfill('-') << std::setw(46) << "\n" << std::setfill(' ');
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::setfill('-') << std::setw(46) << "\n" << std::setfill(' ');
	for (int i = 0; i < 8 && i < this->_ncontact; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		print_string(this->_contact_list[i].get_first_name());
		print_string(this->_contact_list[i].get_last_name());
		print_string(this->_contact_list[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << std::setfill('-') << std::setw(45) << "\n" << std::setfill(' ');
	return ;
}

void	PhoneBook::display_contact_infos(const Contact &Person) const
{
	std::cout << "Contact form" << std::endl << std::endl;
	std::cout << "First name     : " << Person.get_first_name() << std::endl;
	std::cout << "Last name      : " << Person.get_last_name() << std::endl;
	std::cout << "Nickname       : " << Person.get_nickname() << std::endl;
	std::cout << "Phone number   : " << Person.get_number() << std::endl;
	std::cout << "Darkest secret : " << Person.get_secret() << std::endl;
	return ;
}
