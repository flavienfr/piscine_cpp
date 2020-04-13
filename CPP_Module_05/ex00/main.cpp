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
#include <iostream>

int main()
{
	Bureaucrat jean("jean", 42);
	std::cout << jean;

	Bureaucrat jojo(jean);
	std::cout << jojo;

	Bureaucrat patoche("patoche", 150);
	std::cout << patoche;

	patoche.grade_up();
	std::cout << patoche;
	patoche.grade_down();
	std::cout << patoche;
	patoche.grade_down();
	std::cout << patoche;
	patoche.grade_down();
	std::cout << patoche;
	patoche.grade_down();
	std::cout << patoche;
	
	
	return (0);
}