/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 17:45:49 by froussel          #+#    #+#             */
/*   Updated: 2020/03/27 00:00:22 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook() : num(0)
{
}

void	PhoneBook::add()
{
	if (num == 8)
	{
		std::cout << "Contact limit reach" << std::endl;
		return;
	}
	(lst_contact[num]).add();
	num++;
}

void	PhoneBook::search()
{
	int			idx;

	if (num == 0)
	{
		std::cout << "No contact available" << std::endl;
		return ;
	}
	std::cout << std::string(45, '_') << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < num; i++)
		(lst_contact[i]).print_line(i);
	std::cout << std::setw(10) << "Select an index: ";
	while (!(std::cin >> idx) || idx < 0 || idx >= num)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Index range 0-" << num - 1 <<": ";
	}
	std::cin.ignore();
	(lst_contact[idx]).print_all();
}
