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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	{
	//Test action fucntion manualy

	ShrubberyCreationForm arbre("soda");
	arbre.action();

	RobotomyRequestForm robot("pignosse");
	robot.action();

	PresidentialPardonForm president("Hollande");
	president.action();
	}
	{
		std::cout << "---------" << std::endl;

		//Test execute form
		RobotomyRequestForm rob("rob");
		//PresidentialPardonForm rob("rob");
		//ShrubberyCreationForm rob("rob");

		std::cout << rob;

		Bureaucrat jean("jean", 26);//change level
		std::cout << jean;

		jean.signForm(rob);
		jean.executeForm(rob);
	}
	{
		std::cout << "---------" << std::endl;
	
		PresidentialPardonForm rob("rob");
		
		std::cout << rob;
	
		Bureaucrat jean("jean", 26);//change level
		std::cout << jean;
	
		jean.signForm(rob);
		jean.executeForm(rob);
	}
		{
		std::cout << "---------" << std::endl;
	
		ShrubberyCreationForm rob("rob");
		
		std::cout << rob;
	
		Bureaucrat jean("jean", 26);//change level
		std::cout << jean;
	
		jean.signForm(rob);
		jean.executeForm(rob);
	}

	return (0);
}