/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 22:26:36 by froussel          #+#    #+#             */
/*   Updated: 2020/04/13 17:57:06 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************ */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(0)
{
}

Bureaucrat::Bureaucrat(std::string name, int the_grade) : name(name)
{
	init_grade(the_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &the_Bureaucrat) : name(the_Bureaucrat.name)
{
	*this = the_Bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &the_Bureaucrat)
{
	init_grade(the_Bureaucrat.grade);
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::init_grade(int the_grade)
{
	try
	{
		grade = the_grade;
		if (the_grade > GRADE_SCALE)
			throw Bureaucrat::GradeTooLowException();
		if (the_grade < 1)//testmulyi throw
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat &br)
{
	os << br.getName() << ", bureaucrat grade " << br.getGrade() << "." << std::endl;
	return (os);
}

const std::string	&Bureaucrat::getName() const
{ return (name); }

const int			&Bureaucrat::getGrade() const
{ return (grade); }

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Grade Too Low Exception");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade Too High Exception");
}

void	Bureaucrat::grade_up()
{
	try
	{
		if (grade - 1 > GRADE_SCALE)
			throw Bureaucrat::GradeTooLowException();
		if (grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		grade--;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::grade_down()
{
	try
	{
		if (grade + 1 > GRADE_SCALE)
			throw Bureaucrat::GradeTooLowException();
		if (grade + 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		grade++;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
