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
	Form form_1("form_1", 50, 1000);
	std::cout << form_1;

	Bureaucrat jean("jean", 51);
	std::cout << jean;

	jean.signForm(form_1);

	jean.grade_up();
	std::cout << jean;
	jean.signForm(form_1);

	jean.signForm(form_1);

	return (0);
}