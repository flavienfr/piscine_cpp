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
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	Intern esclave;
	//Form *rob = esclave.makeForm("robotomy request", "Bender");
	//Form *rob = esclave.makeForm("presidential pardon", "dodo");
	//Form *rob = esclave.makeForm("shrubbery creation", "didi");
	Form *rob = esclave.makeForm("dhrubbesry creatiosn", "dido");
	if (!rob)
		return (1);

	std::cout << *rob;

	Bureaucrat jean("jean", 1);//change level
	std::cout << jean;

	jean.signForm(*rob);
	jean.executeForm(*rob);

	delete rob;

	return (0);
}
