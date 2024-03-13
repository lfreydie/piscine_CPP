/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:18:46 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/07 18:36:54 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>
# include "Contact.hpp"

class	PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		display_menu(void) const;
		std::string	get_input(const std::string prompt, const bool phone);
		bool		is_valid_phone(const std::string input) const;
		Contact		&get_contact(void);
		void		add_contact(Contact &new_contact);
		void		search_contact(void);
		void		display_contact_list(void) const;
		void		display_contact_infos(const Contact &person) const;
	private:
		Contact		_contact_list[8];
		int			_ncontact;
};

#endif
