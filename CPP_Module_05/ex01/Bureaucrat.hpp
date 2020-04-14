/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 22:26:24 by froussel          #+#    #+#             */
/*   Updated: 2020/04/13 17:55:22 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************ */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define GRADE_SCALE 150

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

	void	init_grade(int the_grade);

public:
	Bureaucrat();
	Bureaucrat(std::string name, int the_grade);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();

	const std::string	&getName() const;
	const int			&getGrade() const;

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	void	grade_up();
	void	grade_down();
	void	signForm(Form &form);
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat &br);

#endif
