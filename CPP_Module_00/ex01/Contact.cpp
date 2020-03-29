/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 16:51:06 by froussel          #+#    #+#             */
/*   Updated: 2020/03/26 22:05:36 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add()
{
	std::cout << "Complete the following form:" << std::endl;
	std::cout << "first name: ";
	std::getline(std::cin, first_name);
	std::cout << "last name: ";
	std::getline(std::cin, last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "login: ";
	std::getline(std::cin, login);
	std::cout << "postal: ";
	std::getline(std::cin, postal);
	std::cout << "address: ";
	std::getline(std::cin, address);
	std::cout << "email address: ";
	std::getline(std::cin, email_address);
	std::cout << "phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "birthday date: ";
	std::getline(std::cin, birthday_date);
	std::cout << "favorite meal: ";
	std::getline(std::cin, favoritemeal);
	std::cout << "underwear color: ";
	std::getline(std::cin, underwear_color);
	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

std::string Contact::trunc(std::string str, size_t width)
{
    if (str.length() > width)
            return str.substr(0, width - 1) + ".";
    return str;
}

void		Contact::print_line(int idx)
{
	std::cout << "|" << std::setw(10) << idx << "|";
	std::cout << std::setw(10) << trunc(first_name, 10) << "|";
	std::cout << std::setw(10) << trunc(last_name, 10) << "|";
	std::cout << std::setw(10) << trunc(nickname, 10) << "|" << std::endl;
}

void		Contact::print_all()
{
	std::cout << "first_name: " << first_name << std::endl;
	std::cout << "last_name: " << last_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "login: " << login << std::endl;
	std::cout << "postal: " << postal << std::endl;
	std::cout << "address: " << address << std::endl;
	std::cout << "email_address: " << email_address << std::endl;
	std::cout << "phone_number: " << phone_number << std::endl;
	std::cout << "birthday_date: " << birthday_date << std::endl;
	std::cout << "favoritemeal: " << favoritemeal << std::endl;
	std::cout << "underwear_color: " << underwear_color << std::endl;
	std::cout << "darkest_secret: " << darkest_secret << std::endl;
}