/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:20:07 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/07 18:22:30 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact {
	public:
		Contact(void);
		~Contact(void);

		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_number(void) const;
		std::string	get_secret(void) const;
		void		set_first_name(std::string new_first_name);
		void		set_last_name(std::string new_last_name);
		void		set_nickname(std::string new_nickname);
		void		set_number(std::string new_number);
		void		set_secret(std::string new_secret);
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
};

#endif
