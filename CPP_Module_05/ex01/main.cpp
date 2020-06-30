/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 22:26:31 by froussel          #+#    #+#             */
/*   Updated: 2020/04/13 17:57:37 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************ */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	{
		Form form("formulaire_1.7.5", 27, 25);

		std::cout << form;

		Bureaucrat jean("jean", 26);//change level
		std::cout << jean;

		jean.signForm(form);
		jean.executeForm(form);
	}
	std::cout << "---------" << std::endl;
		{
		Form form("formulaire_1.7.5", 25, 27);

		std::cout << form;

		Bureaucrat jean("jean", 26);//change level
		std::cout << jean;

		jean.signForm(form);
		jean.executeForm(form);
	}
	std::cout << "---------" << std::endl;
		{
		Form form("formulaire_1.7.5", 25, 25);

		std::cout << form;

		Bureaucrat jean("jean", 26);//change level
		std::cout << jean;

		jean.signForm(form);
		jean.executeForm(form);
	}
	std::cout << "---------" << std::endl;
		std::cout << "---------" << std::endl;
		{
		Form form("formulaire_1.7.5", 26, 26);

		std::cout << form;

		Bureaucrat jean("jean", 26);//change level
		std::cout << jean;

		jean.signForm(form);
		jean.executeForm(form);
	}
	std::cout << "---------" << std::endl;

	return (0);
}