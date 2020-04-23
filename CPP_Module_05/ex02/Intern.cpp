/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 22:56:25 by froussel          #+#    #+#             */
/*   Updated: 2020/04/23 19:04:27 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::func Intern::funcMap[] =
{
	{"robotomy request", &Intern::new_robotomyrequest},
	{"presidential pardon", &Intern::new_presidentialpardon},
	{"shrubbery creation", &Intern::new_shrubberycreation}
};

Intern::Intern()
{
}

Intern::Intern(const Intern &the_Intern)
{
	*this = the_Intern;
}

Intern &Intern::operator=(const Intern &the_Intern)
{
	return (*this);
}

Intern::~Intern()
{	
}

Form	*Intern::new_robotomyrequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}
Form	*Intern::new_presidentialpardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}
Form	*Intern::new_shrubberycreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}


Form	*Intern::makeForm(std::string formName, std::string targetForm)
{
	for (int i = 0; i < NBFUNC; i++)
	{
		if (funcMap[i].name == formName)
		{
			std::cout << "Success form name \"" << formName << "\" created" << std::endl;
			return (funcMap[i].funcptr(targetForm));
		}
	}
	std::cout << "Error form name \"" << formName << "\" not found" << std::endl;
	return (nullptr);
}

const char	*Intern::NewException::what() const throw()
{ return ("Wrong target"); }
