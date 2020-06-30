/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 22:52:08 by froussel          #+#    #+#             */
/*   Updated: 2020/04/23 18:49:44 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# define NBFUNC 3

class Intern
{
private:
	typedef struct	s_func
	{
		std::string	name;
		Form		*(*funcptr)(std::string target);
	}				func;
	static func funcMap[NBFUNC];
	static Form	*new_robotomyrequest(std::string target);
	static Form	*new_presidentialpardon(std::string target);
	static Form	*new_shrubberycreation(std::string target);

public:
	Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	~Intern();

	class NewException : public std::exception{
		virtual const char *what() const throw();
	};

	Form		*makeForm(std::string formName, std::string targetForm);
};

#endif
