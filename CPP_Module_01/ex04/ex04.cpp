/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 19:37:29 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 19:56:01 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_pointer(std::string *str)
{
	std::cout << "print with pointer: " << *str << std::endl;
}

void	print_reference(std::string &str)
{
	std::cout << "print with reference: " << str << std::endl;
}

int	main()
{
	std::string	str;

	str = "HI THIS ISBRAIN";
	print_pointer(&str);
	print_reference(str);
}