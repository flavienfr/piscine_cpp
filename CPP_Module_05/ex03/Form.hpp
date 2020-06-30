/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 00:36:03 by froussel          #+#    #+#             */
/*   Updated: 2020/04/23 19:07:17 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int			grade_to_sign;
	const int			grade_to_exec;

public:
	//Form();
	Form(std::string, int, int);
	Form(const Form &);
	Form &operator=(const Form &);
	virtual ~Form();

	const std::string	&getName(void) const;
	const bool			&getIs_signed(void) const;
	const int			&getGrade_to_sign(void) const;
	const int			&getGrade_to_exec(void) const;

	class GradeTooLowException : public std::exception{
		virtual const char *what() const throw();
	};
	class GradeTooHighException : public std::exception{
		virtual const char *what() const throw();
	};
	class FormAlreadySigned : public std::exception{
		virtual const char *what() const throw();
	};
	class FormNotSigned : public std::exception{
		virtual const char *what() const throw();
	};

	void			beSigned(Bureaucrat &);
	virtual void	action() const = 0;
	void	execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &os, Form &form);

#endif
