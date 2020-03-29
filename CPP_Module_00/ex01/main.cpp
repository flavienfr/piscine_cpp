/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:32:01 by froussel          #+#    #+#             */
/*   Updated: 2020/03/26 21:16:10 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int		main()
{
	std::string	cmd;
	PhoneBook	lst_contact;

	std::cout << std::setw (20) << "WELCOM" << std::endl;
	std::cout << std::setw (18) <<"TO" << std::endl;
	std::cout << std::setw (22) <<"Phone Book" << std::endl;
	while (1)
	{
		std::cout << std::endl;
		std::cout << "Select a command (ADD SEARCH EXIT): ";
		std::getline (std::cin, cmd);
		if (cmd == "SEARCH")
			lst_contact.search();
		else if (cmd == "ADD")
			lst_contact.add();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Unvalid command" << std::endl;
	}
	return (0);
}