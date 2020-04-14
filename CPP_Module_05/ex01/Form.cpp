/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 00:36:05 by froussel          #+#    #+#             */
/*   Updated: 2020/04/14 02:34:39 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*Form::Form()
{
}*/

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) :
name(name), is_signed(0), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	try
	{
		if (grade_to_sign > GRADE_SCALE || grade_to_exec > GRADE_SCALE)
			throw Form::GradeTooLowException();
		if (grade_to_sign  < 1 || grade_to_exec < 1)
			throw Form::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(const Form &the_Form) :
name(the_Form.name), grade_to_sign(the_Form.grade_to_sign), grade_to_exec(the_Form.grade_to_exec)
{
	try
	{
		if (grade_to_sign > GRADE_SCALE || grade_to_exec > GRADE_SCALE)
			throw Form::GradeTooLowException();
		if (grade_to_sign  < 1 || grade_to_exec < 1)
			throw Form::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	*this = the_Form;
}

Form &Form::operator=(const Form &the_Form)
{
	is_signed = the_Form.is_signed;
	return (*this);
}

Form::~Form()
{
}

std::ostream	&operator<<(std::ostream &os, Form &form)
{
	os << "Form: " << form.getName() << " signed: " << form.getIs_signed()
	<< " grade to sign: " << form.getGrade_to_sign() << " grade to execute: "
	<< form.getGrade_to_exec() << std::endl;

	return (os);
}

const std::string	&Form::getName(void) const
{ return (name); }

const bool			&Form::getIs_signed(void) const
{ return (is_signed); }

const int			&Form::getGrade_to_sign(void) const
{ return (grade_to_sign); }

const int			&Form::getGrade_to_exec(void) const
{ return (grade_to_exec); }

const char	*Form::GradeTooLowException::what() const throw()
{ return ("Grade Too Low Exception"); }

const char	*Form::GradeTooHighException::what() const throw()
{ return ("Grade Too High Exception"); }

const char	*Form::FormAlreadySigned::what() const throw()
{ return ("Form Already Signed"); }

void		Form::beSigned(Bureaucrat &bc)
{
	if (bc.getGrade() > grade_to_sign)
		throw Form::GradeTooLowException();
	else if (is_signed)
		throw Form::FormAlreadySigned();
	else
		is_signed = true;
}
